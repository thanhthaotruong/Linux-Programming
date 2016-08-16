#!/bin/sh
ketqua=0
for number in {1..1510..2}
do
	ketqua=$(($ketqua + $number)) 
	
done
echo "$ketqua"