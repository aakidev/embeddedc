#include<stdio.h>
int main()
{int b,p=5;
	printf("Enter number\n");
	scanf("%d",&b);
	while(p>=0)
	{printf("%d",(b&(0x1<<p))?1:0);
	p--;}
}

