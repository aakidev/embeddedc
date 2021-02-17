#include<stdio.h>
int testbit(short int a, short int b)
{
	if(b>15|| b<0)
                return 0;
        else
                return (a&(0x1<<b)?1:0);
}
int main()
{	int testbit(short int,short int);
	short int a,b;
	int c;
	printf("enter 16bit number\n");
	scanf("%hd",&a);
	printf("enter bit position to test\n");
	scanf("%hd",&b);
	c=testbit(a,b);
	if(c==0)
		printf("false");
	else
		printf("true");

	
}

