//Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include<stdio.h>

int cube(int *ptr);

int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int *ptr;

    ptr = &a[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int current_element = *(ptr + i * 2 + j);
            int result_cube = cube(&current_element);
            printf("Cube of %d is %d\n", current_element, result_cube);
        }
    }

    return 0;
}

int cube(int *ptr)
{
    int num = *ptr;
    return num * num * num;
}
