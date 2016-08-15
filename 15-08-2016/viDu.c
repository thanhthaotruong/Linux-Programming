#include <stdio.h>
void main()
{
	int x = 45;
	int *y = &x;
	*y = 92;
	printf("Gia tri cua x la : %i\n",x);
	
}
