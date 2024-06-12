#include<stdio.h>
int main()
{
    int a;
    int count  = 0;
    
    printf("Enter any number: ");
    scanf("%d",&a);

    while(a)
    {
        a = a/10;
        count++;
    }
    printf("Number of Digit is: %d",count);
}