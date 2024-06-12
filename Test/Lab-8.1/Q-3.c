//Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>
int main()
{
    int size;

    printf("Enter The length of array: ");
    scanf("%d",&size);

    int array1[size];
    int array2[size];
    int array3[size];

    printf("Enter %d Elements in array 1\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter %d Elements in array 2\n",size);
    for(int j=0;j<size;j++)
    {
        scanf("%d",&array2[j]);
    }

    for(int k=0;k<size;k++)
    {
        array3[k] = array1[k] + array2[k];
    }
    
    printf("array3 is: ");
    for(int l=0;l<size;l++)
    {
        printf("%d  ",array3[l]);
    }
    printf("\n");
    
}