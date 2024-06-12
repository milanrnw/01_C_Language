//Write a Program to convert the given string in toggle case without using any string function.

#include <stdio.h>

int main()
{
    char a[] = "HELLO world";
    printf("%s\n", a);

    int s = sizeof(a) - 1;
    printf("%d\n", s);

    for (int i = 0; i < s / 2; i++)
    {
        printf("%c", a[i] + 32);
    }

    printf(" ");

    for (int i = s / 2; i < s; i++)
    {
        printf("%c", a[i] - 32);
    }

    return 0;
}
