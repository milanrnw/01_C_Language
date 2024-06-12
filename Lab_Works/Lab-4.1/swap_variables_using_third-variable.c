//Write a Program to Swap two variables using the third variable.
#include<stdio.h>
int main()
{
    int a,b,swap;

    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    swap = a;
    a=b;
    b=swap;

    printf("\na = %d",a);
    printf("\nb = %d",b);

}