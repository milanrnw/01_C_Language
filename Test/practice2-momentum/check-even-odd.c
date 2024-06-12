//Write a Program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    a = (a%2) ? printf("The number %d is odd",a) : printf("The number %d is even",a);
}