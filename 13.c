#include<stdio.h>
int main()
{
	int a,p;
	printf("enter integer value & bit value to check");
	scanf("%d%d",&a,&p);
	printf("bit is %d\n",(a &0x1<<p)?1:0);
}

