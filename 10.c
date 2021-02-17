#include<stdio.h>
int main()
{
	int a;
	printf("Enter no. to check\n");
	scanf("%d",&a);
	if((a&0x1)==1)
		printf("odd\n");
	else
		printf("even");
}
