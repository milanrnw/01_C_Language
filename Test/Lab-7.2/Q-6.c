/*
54321
 5432
  543
   54
    5
*/

#include <stdio.h>

int main() {
    int rows=5;
    for(int i=1;i<=rows;i++)
    {
        int x = rows;
        for(int j=rows;j>=1;j--)
        {
            if(i+j<=6)
            {
                printf("%d",x);
                x--;
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}