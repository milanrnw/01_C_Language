//Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF,
//switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include<stdio.h>

typedef struct operation math;

struct operation
{
    int one;
    int two;
    int result;
};

int main()
{

    int operator;
    int first;
    int second;

    printf("press 1 for: +\n");
    printf("press 2 for: -\n");
    printf("press 3 for: /\n");
    printf("press 4 for: *\n");
    printf("press 5 for: %%\n");
    scanf("%d",&operator);

    printf("choose first number: ");
    scanf("%d",&first);
    printf("choose scond number: ");
    scanf("%d",&second);

    switch (operator)
    {
        case 1:
        printf("addition of %d and %d is: ",first,second,struct operation);
        
    }

}