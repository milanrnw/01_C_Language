/*

1234554321
1234  4321
123    321
12      21
1        1

*/

#include<stdio.h>
int main()
{
    
    for(int i=1;i<=5;i++)
    {
        int k=5;
        for(int j=1;j<=10;j++)
        {
            
            if(i+j<=6)
            {
                printf("%d",j);
            }
            else if(k>=j)
            {
                printf(" ");

            }else if((j-5) < i){
                printf(" ");
                k--;
            }
            else
            {
                printf("%d",k);
                k--;          
            }
            
        }

        printf("\n");
    }
}




// #include<stdio.h>
// int main()
// {
    
//     for(int i=1;i<=5;i++)
//     {
//         int k=5;
//         for(int j=1;j<=10;j++)
//         {
            
//             if(i+j<=6)
//             {
//                 printf("%d",j);
//             }
//             else if(k>=j)
//             {
//                 printf(" ");
//             }else
//             {
//                 printf("%d",k);
//                 k--;          
//             }
            
//         }

//         printf("\n");
//     }
// }