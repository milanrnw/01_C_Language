//Write a Program to find the square of each element of a given 1D array using a Pointer.
#include<stdio.h>

int main()
{
    int a[5];
    int index;

    printf("please enter values of array\n");

    for(index = 0; index < 5; index++)
    {
        scanf("%d", &a[index]);
    }

    for(index = 0; index < 5; index++)
    {
        printf("a[%d] = %d\n", index, a[index]);
    }

    printf("The Square Of Each Element Is\n");

    for(index = 0; index < 5; index++)
    {
        printf("%d, ",a[index]*a[index]);
    }
}