//Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include <stdio.h>

// Function prototype for cube calculation
int cube(int *ptr);

int main()
{
    int a[2][2];  // Declare a 2x2 array
    int *ptr;

    // Input loop to fill the array
    printf("Enter 2x2 array elements:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    ptr = &a[0][0];  // Pointer initialized to point to the first element of the array

    // Loop through the 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate cube of current element using pointer arithmetic
            int current_element = *(ptr + i * 2 + j);
            int result_cube = cube(&current_element);
            printf("Cube of %d is %d\n", current_element, result_cube);
        }
    }

    return 0;
}

// Function definition to calculate cube of a number
int cube(int *ptr)
{
    int num = *ptr;
    return num * num * num;
}
