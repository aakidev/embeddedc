#include<stdio.h>
int mysize(int x)
{	int count =0;
	x=1;
	while(x>0)
	{
		x=x<<1;
		count++;
	}
	return count;
}
int main()
{	int mysize(int);
	int x=34,a;
	a=mysize(x);
	printf("size is %d",a);
}
