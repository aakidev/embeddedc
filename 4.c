#include<stdio.h> 
  
int main()
{	
     int x,y;
     printf("enter two numbers \n");
     scanf("%d%d",&x,&y);

    while (y != 0) 
    { 
          int carry = x & y;   
  
           x = x ^ y;  
  
             y = carry << 1; 
    } 
    printf("sum is %d\n",x);

    return 0; 
} 
  

