#!/bin/bash
<<END
By K
effect initialize mini redhat/centos system
Uages sh ./system.sh
END
hostname_install(){
	hn=`echo $IPADDR | cut -d. -f4`
	hostnamectl set-hostname k.server${hn}.cc
	}

ip_install() {
	read -p "device：" DEVICE
	read -p "ip:" IPADDR
	HWADDR=`ip a | sed -nr "/^.*${DEVICE}/,/$/p" | sed -n '2p' | awk '{print $2}'`
	GATEWAY=`echo -n $IPADDR | cut -d. -f1-3 | awk '{print $0".2"}'`
	echo -e "TYPE=Ethernet\nDEVICE=${DEVICE}\nNAME=${DEVICE}\nHWADDR=${HWADDR}\nONBOOT=yes\nBOOTPROTO=static\nIPADDR=${IPADDR}\nNETMASK=255.255.255.0\nGATEWAY=${GATEWAY}\nDNS1=119.29.29.29" > /etc/sysconfig/network-scripts/ifcfg-$DEVICE
	ifdown $DEVICE
	ifup $DEVICE
	ping -c1 -i 0.1 -w 1 www.baidu.com
	[ $? -eq 0 ] && echo -e "\033[35mThe network is connected to the extranet successfully\033[0m" || echo -e "\033[31mNetwork connection Extranet successful The extranet connection failed. Check the routing table\033[0m"
	}

selinux_modify(){
	sed -i 's/SELINUX=[pe].*/SELINUX=disabled/g' /etc/selinux/config
	}

jdt() {
	i=1
	index=0
	array=('|' '\' '—' '/')
	str='#'
	while [ $i -le 100 ]
	do
		printf " [%-100s][%d%%][%c] \r" $str $i ${array[$index]}
		str+='#'
		let index=i%4
		let i++
		sleep 0.1
	done
	echo
}

yum_install(){
	redhat=`cat /etc/redhat-release | awk '{print $(NF-1)}' | cut -d. -f1`
	[ ! -d /iso ] && mkdir /iso
	echo "/dev/sr0		/iso		iso9660		defaults	0 0" >> /etc/fstab
	mount -a
	if [ $redhat -eq 8 ]
	then
	echo -e "[Base]\nname=Base\nbaseurl=file:///iso/BaseOS\ngpgcheck=0\nenabled=1\n[AppStream]\nname=AppStream\nbaseurl=file:///iso/AppStream\ngpgcheck=0\nenabled=1" > /etc/yum.repos.d/local.repo
	else
	echo -e "[local]\nname=local\nbaseurl=file:///iso\nenabled=1\ngpgcheck=0" >> /etc/yum.repos.d/local.repo
	fi
	rpm -q net-tools &> /dev/null
	[ $? -ne 0 ] && yum install -y net-tools &> /dev/null
	rpm -q wget &> /dev/null
	[ $? -ne 0 ] && yum install -y wget &> /dev/null
	mirror=`curl https://mirrors.tencent.com/help/centos.html | grep "wget" | grep "centos${redhat}_base.repo" | awk '{print $NF}'`
	wget -O /etc/yum.repos.d/CentOS-Base.repo $mirror
#	jdt
	yum makecache
	yum install -y epel-release.noarch &> /dev/null
	[ $redhat -eq 7 ] && wget -O /etc/yum.repos.d/docker-ce.repo http://182.61.144.62:9090/docker-ce.repo
	yum makecache
	yum install -y 7:lvm2-2.02.187-6.el7_9.5.x86_64 vim curl rsync ntp sysstat &> /dev/null
	systemctl disable --now firewalld &> /dev/null
	systemctl enable --now ntpd &> /dev/null
	echo "systemctl restart ntpd" >> /etc/rc.local
	echo "* */1 * * * systemctl restart ntpd" >> /var/spool/cron/root
	[ $redhat -ne 8 ] && systemctl disable --now NetworkManager &> /dev/null
	}

LANG() {
	sed -i 's/zh_CN/en_US/g' /etc/locale.conf
}

rb() {
	INPUT=""
	while [[ -z $INPUT ]]
	do
		read -p "For all configurations to take effect, check whether reboot?(yes/on)" INPUT
	done
	case $INPUT in
	  'yes' )
	reboot
	;;
	  'no'  )
	exit 0
	;;
	*)
	echo -e "\033[31myes or no?\033[0m" && rb
	esac
}
ip_install
hostname_install
selinux_modify
yum_install
LANG
rb
