#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n>0)
	{
	n=n&(n-1);
		count++;
	}
	if(count==1)
		printf("pow of 2 \n");
	else
		printf("not pow of 2\n");
}
