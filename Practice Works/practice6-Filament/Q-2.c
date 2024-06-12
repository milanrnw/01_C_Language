//Write a Program to count the frequency of each character in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    // Initialize the frequency array to zero
    int b[256] = {0};

    //char a[] = "development";

    char a[100];

    printf("enter name ");
    scanf("%s",&a);
    int size = strlen(a);
    printf("size: %d\n", size);

    for(int i = 0; a[i] != '\0'; i++)
    {
        int index = (int)a[i];
        b[index]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(b[i] != 0)
        {
            printf("%c : %d\n", (char)i, b[i]);
        }
    }

    return 0;
}
