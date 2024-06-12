/*
     j j j j j j j j j 
     1 2 3 4 5 6 7 8 9                     
i1   - - - - * - - - -     
i2   | | | * * * | | |      
i3   | | * * * * * | | 
i4   | * * * * * * * |  
i5   * * * * * * * * *

*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i+j<=5)
            {
                printf(" ");
            }
            else if(j<=5 && i+j<=10)
            {
                printf("*");
            }
        }

        for(int j=5;j>=1;j--)
        {
            if(i+j>=7)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
}