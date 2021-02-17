#include<stdio.h>
int rev(int b)
{
	int a,c=0;
	while(b>0)
	{a=b%10;
	c=c*10 + a;
	b=b/10;
	}
	return c;

	}

int main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	b=rev(a);
printf("reverse is : %d",b);

}
