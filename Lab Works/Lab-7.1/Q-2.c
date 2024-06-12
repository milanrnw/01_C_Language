// 5
// 45
// 345
// 2345
// 12345

#include<stdio.h>
int main()
{
    int x ;
    for(int i=5;i>=1;i--)
    {
        x = i;
        for(int j=1;j<=5;j++)
        {
            if(i+j<=6){
                printf("%d",x);
                x++;
            }
            
        }
        printf("\n");
    }
    return 0;
}