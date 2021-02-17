#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("power of 2");
	else
		printf("not power of 2");
}
/*	while(n>0)
	{
	n=n&(n-1);
		count++;
	}
	if(count==1)
		printf("pow of 2 \n");
	else
		printf("not pow of 2\n");
}*/
