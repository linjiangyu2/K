# ksh 1 2 3(系统优化)
/* By K
  eamil 	linjiangyu0702@qq.com
  Blog  	linjiangyu.com
  description   自用初始化最小化centos7.x OS系统的脚本。
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
1. 证书有效期(默认365天)
2. 国家 城市 公司 ...前两个必须填正确后面的随便
