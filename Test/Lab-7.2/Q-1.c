//     1
//    21
//   321
//  4321
// 54321

#include <stdio.h>
int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for(int j=rows; j>= 1; j--)
        {
            if(i>=j){
                printf("%d", j);
            }else{
                printf(" ");
            } 
        }
        printf("\n");
    }

    return 0;
}