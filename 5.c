#include<stdio.h> 
  
int main()
{	
     int x,y;
     printf("enter two numbers \n");
     scanf("%d%d",&x,&y);

    while (y != 0) 
    { 
          int borrow = ~x & y;   
  
           x = x ^ y;  
  
             y = borrow << 1; 
    } 
    printf("Substraction  is %d\n",x);

    return 0; 
} 
  

