//Write a Program to find the average of a 1D array.

#include<stdio.h>
int main()
{
    int size,sum=0;

    printf("Enter the length of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements in array\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    for (int i=0;i<size;i++)
    {
       printf("array[%d] : %d\n",i,arr[i]);
    }

    printf("The Average of array is: %d",sum/size);
}