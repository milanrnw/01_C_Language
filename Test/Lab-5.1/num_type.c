//Write a Program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
int main()
{
    double a;
    printf("Enter Any Number: ");
    scanf("%lf",&a);

    if(a < 0)
    {
        printf("This Number Is Negative.");
    }
    else if (a == 0)
    {
        printf("This Number Is Neutral.");
    }
    else if (a > 0)
    {
        printf("This Number Is Positive.");
    }
    else
    printf("Invalid Input.");
    
    return 0;
}