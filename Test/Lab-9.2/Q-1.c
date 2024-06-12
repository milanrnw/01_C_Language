// Write a Program to check if a given password is strong or not by satisfying the below criteria:
// - Password must contain at least one letter, one digit & one special symbol.
// - Password must be at least 6 characters

#include<stdio.h>
#include<string.h>

int main()
{
    char password[50];
    int size;

    int letter = 0;
    int symbol = 0;
    int digit = 0;

    printf("Create a Password\n");
    scanf("%s", password);
    printf("\nYour Password: %s\n",password);


    size = strlen(password);

    //printf("\nSize of password: %d\n",size);

    if(size >= 6)
    
    //printf("your password satisfies minimum character requirements");
    
    {

        for(int i = 0; password[i] != '\0';i++)

        {
            //printf("Successfully reached");
            
                if(password[i] >= 'A' && password[i] <= 'Z' || password[i] >= 'a' && password[i] <= 'z')
                {
                    letter = 1;                    
                }

                if(password[i] >= '0' && password[i] <= '9')
                {
                    digit = 1;
                }

                if(password[i] >= '!' && password[i] <= '/' || password[i] >= ':' && password[i] <= '@' || password[i] >= '[' && password[i] <= '`')
                {

                    symbol = 1;
            }

            }

                if( letter == 0)
                {
                    printf("\nTry Again Mate, Your Password is Weak");
                    printf("\n(Password must contain atleast one letter)");
                }
                else if (digit == 0)
                {
                    printf("\nTry Again Mate, Your Password is Weak");
                    printf("\n(Password must contain atleast one digit)");
                }
                else if(symbol == 0)
                {
                    printf("\nTry Again Mate, Your Password is Weak");
                    printf("\n(Password must contain atleast one special symbol)");
                }
                else if(letter == 1 && digit == 1 && symbol == 1)
                {
                    printf("\nGood Job, Your Password is Strong");
                }

    }
    else if(size < 6)
    {
        printf("\nPassword Must Contain Atleast Six Characters");
    }

   

    
}
