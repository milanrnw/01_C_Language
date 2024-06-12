#include<stdio.h>
int main()
{
    int a=97;
    int z=122;
    int count = 0;
    for(int i=97;i<=122;i += 4)
    {
        printf("%c\n",a);
        a += 4;
        count++;
    }
    printf("count : %d",count);
}