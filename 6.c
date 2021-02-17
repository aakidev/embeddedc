#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	c=a&~b;
	d=b&~a;
	e=c|d;
	printf("exor output is : %d"e);
}

