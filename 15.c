#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swap x=%d, y=%d",x,y);
}

