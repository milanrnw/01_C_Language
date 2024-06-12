//     5
//    45
//   345
//  2345
// 12345

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
                printf("%d",j);
            }
        }
        printf("\n");
    }
}