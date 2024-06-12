/*
     j j j j j j j j j 
     1 2 3 4 5 6 7 8 9                     
i1   - - - - 1 - - - -     
i2   | | | 1 2 1 | | |      
i3   | | 1 2 3 2 1 | | 
i4   | 1 2 3 4 3 2 1 |  
i5   1 2 3 4 5 4 3 2 1

*/

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=1;
        for(int j=1;j<=9;j++)
        {
            
            if(i+j<=5)
            {
                printf(" ");
            }
            else if(j<=5 && i+j<=10)
            {
                printf("%d",k);
                k++;
            }
        }

        int a=4;
        for(int j=1;j<=4;j++)
        {
            if(i+j>=6)
            {
                printf("%d",a);
                
            }
            a--;         
        }
        printf("\n");
    }
}

