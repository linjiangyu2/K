# ksh 1 2 3(系统优化) 4(初始化)
/* By K
  Eamil 	linjiangyu0702@qq.com
  Blog  	linjiangyu.com
  Description   自用初始化最小化centos7.x OS系统的脚本。
  Modify_date	2022-11-08(初始化添加收集系统信息)
*/
Usage: ./ksh
# 需要把虚拟机的CD连接上,要不然会出错
# 一旦运行不可中断
# 可通过邮箱联系或者博客linjiangyu.com
1.此系统是否是第一次使用这个脚本,yes or no (可二次使用用于配置IP地址)
2.device网卡设备名,如ens33或eth0
3.IP要设定的IP地址
4.hostname要设定的主机名
5.是否使用k.dns.com的内网域名(默认为no),yes or no
6.reboot是否重启(推荐重启，让全部配置生效),yes or no
# kca
/* By K
  eamil 	linjiangyu0702@qq.com
  Blog  	linjiangyu.com
  description   自签证书生成
*/
Usage: ./kca
# 
* 全部必填项，不会填的按default的输入
# kkca
/* By K
  eamil 	linjiangyu0702@qq.com
  Blog  	linjiangyu.com
  description   CA服务器搭建
*/
Usage: ./kkca
#
1.私钥字节
2.CA服务器自签证书有效期限
3.证书信息
  CN
  Guangdong
  Jieyang
  K
  Ops
  k.ca.com
  linjiangyu0702@qq.com
