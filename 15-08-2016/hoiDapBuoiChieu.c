#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define y "y"

void main()
{
	char s[20];
	
	printf("Moi ban nhap y/n : \n" );
	scanf("%s",s);
	int ketqua = strcmp(s,y);
	if(ketqua==0)
	{
		printf("Chao buoi chieu! \n");
	}
	else
	{
		printf("Khong phai buoi chieu ");
	}
	
}