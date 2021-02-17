#include<stdio.h>
int main()
{int b,p=7,i=0;
	printf("Enter number\n");
	scanf("%d",&b);
	while(p>=0)
	{(b&(0x1<<p))? i++:i;

			p--;}
	printf("total count on is :%d",i);
}

