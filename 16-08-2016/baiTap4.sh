#!/bin/sh
echo "Chuong trinh kiem tra mat khau "
read a
matkhau="123456"
while [ "$matkhau" -ne $a ]
do
	echo "Mat khau ban nhap khong dung"
	echo "Moi ban nhap lai"
	read a
done
exit 0