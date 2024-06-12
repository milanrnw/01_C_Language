// 10101
// 1010
// 101
// 10
// 1

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
        if (j == 1 || j == 3 || j==5)
        {
            printf("1");
        }
        else
        printf("0");
    }
    printf("\n");
    }

    return 0;
}