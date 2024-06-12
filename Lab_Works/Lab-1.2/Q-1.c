//Write a Program to print your name, age, and school.
#include<stdio.h>
int main()
{
    char name [50] = "";
    int age;
    char school [50] = "";

    printf("Please Enter Your Name: ");
    scanf("%49s", name);
    printf("Please Enter Your Age: ");
    scanf("%d",&age);
    printf("Please Enter The Name Of Your School: ");
    scanf("%49s", school);

    printf("\nUser Details: \n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Study at: %s\n",school);

    return 0;
}