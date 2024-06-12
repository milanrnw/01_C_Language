//Write a Program to find the sum of the first and the last digit of a number.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d",&a);
    int b;
    int light = 0;
    int first;
    int last;
    
    while(a){
//        printf("\nthis is a: %d",a);
        b=a%10;
//        printf("\nthis is b: %d",b);
        
        if(!light)
        {
            last = b;
//            printf("\nthis is last: %d",last);
            light = 1;
        }
        else
        {
            first=b;
//            printf("\nthis is first: %d",first);
        }
        a=a/10;
//        printf("\nthis is a: %d",a);
    }
    int sum = first + last;
    printf("\nThe sum of first and last digit is : %d\n",sum);
}