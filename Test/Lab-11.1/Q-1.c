#include<stdio.h>
int main()
{
    int *ptr;

    int a[] = {1, 2, 3, 4, 5};

    ptr = &a[0];

    printf("address of a: %u\n",a);
    printf("address inside ptr: %u\n",ptr);

    for(int i = 0; i < 5; i++)
    {
        printf("value of a: %d\n", *a);
        printf("value inside ptr: %u\n", *ptr);
        
    }

}