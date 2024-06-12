#include<stdio.h>
int main()
{
    int first;
    char sign;
    int second;
    int result;

    printf("Enter first value: ");
    scanf("%d", &first);

    printf("Select Operation: (+ , / , * , - , %%): ");
    scanf(" %c", &sign);

    printf("Enter Second value: ");
    scanf("%d", &second);

    if (sign == '+')
    {
        result = first + second;
        printf("%d + %d = %d ",first,second,result);
    }
    else if(sign == '-')
    {
        result = first - second;
        printf("%d - %d = %d",first,second,result);
    }
    else if(sign == '*')
    {
        result = first * second;
        printf("%d * %d = %d",first,second,result);
    }
    else if(sign == '/')
    {
        result = first / second;
        printf("%d / %d = %d",first,second,result);
    }
    else if(sign == '%')
    {
        result = first % second;
        printf("%d %% %d = %d",first,second,result);
    }
}