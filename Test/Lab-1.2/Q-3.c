
// * 
// * * 
// * * * 
// * * 
// * 

#include<stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(int a=2;a>=1;a--)
    {
        for(int b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


