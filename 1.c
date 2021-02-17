//1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator
#include<stdio.h>
#define SET_BIT(x,p) (x | (0x1<<p))
#define CLEAR(x,p) (x &(~(0x1<<p)))
#define TOGG(x,p) (x ^(0x1<<p))

int main()
{int x,p;
printf("enter x & p\n");
scanf("%d%d",&x,&p);
printf("set: %d\n",SET_BIT(x,p));
printf("clear: %d\n",CLEAR(x,p));
printf("Toggle: %d\n",TOGG(x,p));

}

	


