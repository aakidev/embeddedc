#include<stdio.h>
int main()
{
	int a,b, r=0;
	printf("enter two positive no.\n ");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		if((b&1)!=0)
			r=r+a;
		a=a<<1;
		b=b>>1;
	}
	printf("result is %d",r);
}

