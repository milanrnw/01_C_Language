// A
// BA
// CBA
// DCBA
// EDCBA

// #include<stdio.h>
// int main()
// {
//     char alpha;
//     char rows = 'E';

//     for(char i = 'A';i<=rows;i++)
//     {
//         for(alpha=i;alpha>='A';alpha--)
//         {
//             printf("%c",alpha);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main(){
    for(int i = 'A'; i <= 'E'; i++)
    {
        for(int j = 'E'; j >= 'A'; j--)
        {
            if(j <= i)
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
}