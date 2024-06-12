//Write a Program to find the length of a 1D array.

#include<stdio.h>
int main()
{
    int length;

    printf("Enter the size of array you want to create: ");
    scanf("%d",&length);

    int arr [length];

    printf("Enter %d  Elements in array: \n",length);
    for(int i=0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<length;i++)
    {
       printf("array[%d] : %d\n",i,arr[i]);
    }

    printf("\nThe length of array is: %d",length);

    return 0;

}