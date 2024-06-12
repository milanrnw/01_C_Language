#include<stdio.h>
//#include<string.h>

int main()
{
    int a[5];

    int index;
    int j;

    // int length = strlen(a);
    // printf("length of a: %d\n",length);


    printf("Enter values of array\n");

    for(index = 0 ; index < 5 ; index++)
    {
        scanf("%d", &a[index]); // values stores on indices of a;
    }

    printf("\nOriginal\n");
    for(j = 0 ; j < 5 ; j++)
    {
        printf("a[%d] = %d\n",j, a[j]); //based on j as a index=> on index j, a of j index value is ...
    }

    printf("\nReverse\n");

    // for(j = 4; j >= 0 ; j--)
    // {
    //     printf("a[%d] = %d\n",j, a[j]);
    // }

    for(j = 4; j >= 0 ; j--)
    {
        printf("%d, ",a[j]);
    }
}