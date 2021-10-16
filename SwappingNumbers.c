//Program to swap two numbers

#include<stdio.h>
void main()    
{    
int a,b;      
printf("Enter First Number= ");
scanf("%d",&a);
printf("Enter Second Number= ");
scanf("%d",&b);
printf("Before Swap a=%d b=%d",a,b);    
//swapping
a=a+b;  
b=a-b;    
a=a-b;
printf("\nAfter Swap a=%d b=%d",a,b);    
return 0;
}
