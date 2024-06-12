//Write a Program to find the area of a rectangle.
#include<stdio.h>
int main()
{
    double l,w;
    printf("Enter length of rectangle: ");
    scanf("%lf",&l);

    printf("Enter width of rectangle: ");
    scanf("%lf",&w);

    printf("\nThe area of rectangle is : %.3lf",l*w);
    printf("\nFormula: Length * Width");

    return 0;
}