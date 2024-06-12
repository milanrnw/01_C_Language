#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int *temp;

    printf("BEFORE\n");
    printf("a : %d\n",a);
    printf("b : %d\n",b);

    *temp = b;
    b = a;
    a = *temp;

    printf("AFTER\n");
    printf("a : %d\n",a);
    printf("b : %d\n",b);


}