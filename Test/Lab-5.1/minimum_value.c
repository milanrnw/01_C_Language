//Write a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter First Number: ");
    scanf("%lf",&a);

    printf("Enter Second Number: ");
    scanf("%lf",&b);

    if(a<b)
    {
        printf("minimum value: %lf",a);
    }
    else
    {
        printf("minimum value: %lf",b);
    }
}

/*
#include<stdio.h>
int main()
{
    double first_number,second_number;
    printf("Enter First Number: ");
    scanf("%lf",&first_number);

    printf("Enter Second Number: ");
    scanf("%lf",&second_number);

    if(first_number < second_number)
    {
        printf("The minimum value is: %lf",first_number);
    }
    else if (second_number < first_number)
    {
        printf("The minimum value is: %lf",second_number);
    }
    else if(first_number == second_number)
    {
        printf("No minimum value, Both are same.");
    }
    else
    printf("Invalid Input, Try Again.");

    return 0;
}
*/