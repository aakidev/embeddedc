#include<stdio.h>
int main()
{
	int a,b;
	printf("enter number:");
	scanf("%x",&a);
	b=a;
	a=(a>>20 & 0x00000fff) ;
	//b=(b<<12 );
	b=(b & 0x000fffff);

		printf("%x\n%x",a,b);
}


