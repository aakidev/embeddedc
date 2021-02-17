#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	c=a-(~b+1);
	printf("addition is %d\n",c);
	c=a+(~b+1);
	printf("substraction is %d\n",c);
}


