/*
Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure.
Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/

#include<stdio.h>

typedef struct emp emp_data;

struct emp
    {
        int emp_id;
        char *emp_name;
        int emp_age;
        char *emp_role;
        char *emp_city;
        int emp_experience;
        char *emp_company_name;
    };

    void info(emp_data about)
{

   for(int i = 1; i <= n; i++)
   {
        printf("Enter employee no %d data\n"i);
        printf("id : ");
        scanf("%d",&emp_arr[i].id);
        printf("Enter employee no %d data\n"i);
        printf("name : ");
        scanf("%d",&emp_arr[i].name);
        printf("Enter employee no %d data\n"i);
        printf("id : ");
        scanf("%d",&emp_arr[i].id);
   }
    
};

int main()
{
    int size;

    printf("Enter the number of Employees: ");
    scanf("%d",&size);

    char a[size];
    printf("%d",sizeof(a));

    emp emp_arr[a];

    emp_data about;

    for(int index = 0; index < size; index++)
    {
        about.emp_id;
        about.emp_name;
        about.emp.age;
        about.emp_role;
        about.emp_city;
        about.emp_experience;
        about.emp_company_name;
    }
}