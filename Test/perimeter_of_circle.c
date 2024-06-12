//Write a Program to find the Perimeter of the circle.
#include<stdio.h>
int main()
{
    const double pi = 3.14159265359;
    double r;

    printf("Enter radius of circle: ");
    scanf("%lf",&r);

    printf("Perimeter of circle: %lf",2*pi*r);

    return 0;
}