#include <stdio.h>

int size_of_string(char* name)
{
    int size = 0;
   
    for(int i=0; name[i]!='\0'; i++)
    {
        size++;
    }
   
    return size;
}


int is_palindrom(char* str, int size)
{
    int range= size/2;
    printf("range : %d\n", range);
    for(int fi=0, li=size-1; fi<= range; fi++, li--)
    {
       
        if(str[fi] == str[li])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
   
    return 1;
}

int main() {
   
    char name[100];

    printf("Enter any name: ");
    scanf("%s",&name);
   
    int size = size_of_string(name);
   
    printf("size of name : %d\n", size);
   
    int is_pl = is_palindrom(name, size);
   
   
    if (is_pl)
    {
        printf("%s is palindrom\n", name);
    }
    else
    {
        printf("%s is not palindrom\n", name);
    }
   
   
   
    return 0;
}
