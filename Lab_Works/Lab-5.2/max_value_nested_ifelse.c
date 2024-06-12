//Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.
#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter First Number: ");  
    scanf("%d",&a);

    printf("Enter Second Number: ");  
    scanf("%d",&b);

    printf("Enter Third Number: ");  
    scanf("%d",&c);

    printf("Enter Fourth Number: ");  
    scanf("%d",&d);

    if(a>=b && a>=c && a>=d)
    {
        printf("maximum is %d",a);
    }else if(b>=a && b>=c && b>=d)
    {
        printf("maximum is %d",b);
    }else if(c>=a && c>=b && c>=d)
    {
        printf("maximum is %d",c);
    }else if(d>=a && d>=b && d>=c)
    {
        printf("maximum is %d",d);
    }
    return 0;
   }