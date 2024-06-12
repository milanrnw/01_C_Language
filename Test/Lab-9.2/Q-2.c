//Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
#include<stdio.h>
#include<string.h>

int main()
{
    int size;
    
    char email[30];
    char myemail[30] = "mike9@gmail.com";
    int password;
    int mypassword = 12345;

    
    printf("Enter Your Registered Email : ");
    scanf("%s", email);
    printf("Enter Your Password : ");
    scanf("%d", &password);

    size = strlen(email);
    //printf("size : %d",size);

    email == strlwr(email);
    //printf("\nYour Email : %s", &email);

    if(strcmp(email,myemail) == 0)
    {
        if(password == mypassword)
        {
            printf("\nYou Have Successfully Loggedin");
        }
        else
        {
            printf("\nInvalid Password");
        }
    }
    else
    {
        printf("\nInvalid Email");
    }
}