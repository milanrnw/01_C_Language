/*
10101
 0101
  101
   01
    1
*/

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=1;j--)
        {
            if(i<j)
            {
                printf(" ");
            }else if(j%2)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}