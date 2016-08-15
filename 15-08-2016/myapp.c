#include <stdio.h>
#include <stdlib.h>
int func1();
double func2();
int main(int argc, char *argv[])
{
	printf("Ket qua dung ham func1: %d\n", func1() );
	printf("Ket qua dung ham func2: %2f\n",func2() );
	return 0;
}