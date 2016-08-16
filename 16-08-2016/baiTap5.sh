#!/bin/sh
echo "Hom nay la thu may?"
read thu
case $thu in
	"hai" | "2" | "h" | "HAI" )
	echo "Hom nay la thu hai"
	;;
	"ba" | "3" | "b" | "BA" )
	echo "Hom nay la thu ba"
	;;
	"tu" | "4" | "t" | "TU" )
	echo "Hom nay la thu tu"
	;;
	"nam" | "5" | "n" | "NAM" )
	echo "Hom nay la thu nam"
	;;
	"sau" | "6" | "s" | "SAU" )
	echo "Hom nay la thu sau"
	;;
	"bay" | "7" | "by" | "BAY" )
	echo "Hom nay la thu bay"
	;;
	"cn" | "CN" )
	echo "Hom nay la chu nhat"
	;;
	* )
	echo "Ban nhap khong dung"
	exit 0
	;;
esac 
exit 1