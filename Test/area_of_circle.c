// Write a Program to find the area of a circle.
#include<stdio.h>
int main()
{
    const double pi = 3.14159265359;
    double radius;
    printf("Enter the radius of circle: ");
    scanf("%lf",&radius);

    printf("\nThe area of circle is: ");
    printf("%.3lf",pi*radius*radius);
    printf("\nFormula: Pi * Radius * Radius");


    return 0;

}