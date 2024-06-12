//Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter First Number: ");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);

    printf("Enter Third Number: ");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("minmum is %d", a);
        }else if(c<b){
            printf("minmum is %d", c);
        }else{
            printf("minmum is %d", b);
        }
    }else if(b < c){
        printf("minmum is %d", b);
    }else{
        printf("minmum is %d", c);
    }

    return 0;
}