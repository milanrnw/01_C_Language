//     5
//    44
//   333
//  2222
// 11111

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }else if(j>=i)
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
}