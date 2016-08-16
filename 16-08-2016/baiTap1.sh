#!/bin/sh
echo "Moi ban nhap vao mot so: "
read a
if [ $(( $a % 2 )) -eq "0" ]
then
	echo "So ban nhap la so chan"
else
	echo "So ban nhap la so le"
fi