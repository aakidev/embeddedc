#include<stdio.h>
int main()
{
	int a;
	printf("enter number:");
	scanf("%x",&a);
	a=(a<<24 & 0xFF000000)| (a>>24 & 0x000000FF)| (a<<8 & 0x00FF0000)| (a>>8 & 0x0000FF00);
		printf("%x\n",a);
}


