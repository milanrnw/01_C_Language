// 10101
// 1010
// 101
// 10
// 1

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
        if (j == 1 || j == 3 || j==5)
        {
            printf("1");
        }
        else
        printf("0");
    }
    printf("\n");
    }

    return 0;
}

// #include <stdio.h>
// int main() {
//     int rows = 5; // Number of rows

//     for (int i = 5; i > 0; i--) { // Loop for each row
//         for (int j = 0; j < i; j++) { // Loop to print '1's and '0's
//             // Print '1' at even indices, '0' at odd indices
//             if (j % 2 == 0) {
//                 printf("1");
//             } else {
//                 printf("0");
//             }
//         }
//         printf("\n"); // Move to the next line after each row
//     }

//     return 0;
// }