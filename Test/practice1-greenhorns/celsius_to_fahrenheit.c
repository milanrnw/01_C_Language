//Write a Program to convert temperature from degrees Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter the Temperature in celsius: ");
    scanf("%lf",&a);

    b = (a * 9/5) + 32;
    printf("The Temperature in Fahrenheit is: %lf",b);

    return 0;
}