#include<stdio.h>
void printbin(int a)
{
	int s=31;
	while(s>=0)
	{
		printf("%d",(a&(0x1<<s))?1:0);
		s--;
	}
}
int main()
{	void printbin(int);
	int x,y,p,n;
	printf("enter x , y, n, p");
	scanf("%d%d%d%d",&x,&y,&n,&p);
	//funsetbit(x,y,n,p);
	printf("\n");
	printbin(x);
	printf("\n");
	printbin(y);
	printf("\n");
	y=y<<32;
	printf("y=");

	printbin(x);
	printf("\n");
	}

