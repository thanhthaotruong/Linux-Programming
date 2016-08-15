#include <stdio.h>
#include <stdlib.h>


struct phanSo
{
	int tu;
	int mau;
};
typedef struct phanSo PHANSO;
void main()
{
	PHANSO *a;
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	a = (PHANSO *) calloc(10, sizeof( PHANSO ));
	for(int i=0;i<n;i++)
	{
		printf("Nhap tu: \n");
		scanf("%d",&(a+i)->tu);
		printf("Nhap mau: \n");
		scanf("%d",&(a+i)->mau);
	}
	for(int i=0;i<n;i++)
		printf("%d/%d\t",(a+i)->tu,(a+i)->mau);
	printf("\n");
	free(a);
}

