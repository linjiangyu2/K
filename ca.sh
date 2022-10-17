#!/bin/bash
<<END
By K.
Eamil linjiangyu0702@qq.com
END
read -p 'ca days(default 365): ' days
[ -z $days ] && days=365
mkdir SSL
(umask 077;openssl genrsa -out ./SSL/cakey.pem)
openssl req -new -key ./SSL/cakey.pem -out ./SSL/ca.csr
openssl x509 -req -days $days -in ./SSL/ca.csr -signkey ./SSL/cakey.pem -out ./SSL/ca.crt
