//Write a C Program to find the third angle of a right triangle if two other angles are given.
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("Enter First Angle: ");
    scanf("%d",&a);

    printf("Enter Second Angle: ");
    scanf("%d",&b);

    c = pow(a,2)+pow(b,2);
    c = sqrt(c);

    printf("Third Angle of Right Triangle is: %d",c);

}