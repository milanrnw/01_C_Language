//Write a Program to convert the given string in uppercase without using any string function.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "abcd";
    printf("%s\n", a);

    int s = sizeof(a) - 1;
    printf("%d\n", s);

    
    for (int i = 0; i < s; i++)
    {
        printf("%c", a[i] - 32);
    }

}