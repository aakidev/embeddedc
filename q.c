#include<stdio.h>
int main()
{
	int a;
	if(a&(a=2))
		printf("yes");
	else
		printf("no");
}
