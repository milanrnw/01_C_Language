//Write a Program to find the length of a string using a Pointer.
#include<stdio.h>
int main()
{
    int count = 0;
    char a[] = "string";
    char *ptr;
    ptr = &a[0];
    
    for(int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", *ptr);
        ptr++;
        count++;
    }
    printf("\nlength of string : %d",count);
}