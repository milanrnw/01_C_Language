//Write a Program to find the area of a triangle.
#include<stdio.h>
int main()
{
    double b,h;
    printf("Enter Base of triangle: ");
    scanf("%lf",&b);

    printf("Enter Height of triangle: ");
    scanf("%lf",&h);

    printf("\nArea of triangle is: %.3lf",0.5*b*h);
    printf("\nFormula: Half(1/2) * Base * Height");

    return 0;
}