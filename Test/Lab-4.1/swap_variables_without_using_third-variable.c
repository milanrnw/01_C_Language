//Write a Program to Swap two variables without using a third variable.
#include<stdio.h>
int main()
{
    int a=2,b=1;
     printf("a: %d",a);
     printf("\nb: %d",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\na: %d",a);
     printf("\nb: %d",b);
}