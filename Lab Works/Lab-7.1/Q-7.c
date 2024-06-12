// A
// BA
// CBA
// DCBA
// EDCBA

#include<stdio.h>
int main()
{
    char alpha;
    char rows = 'E';

    for(char i = 'A';i<=rows;i++)
    {
        for(alpha=i;alpha>='A';alpha--)
        {
            printf("%c",alpha);
        }
        printf("\n");
    }

    return 0;
}