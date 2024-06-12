//Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>
int main()
{
    int base,hra,da,ta,grosssalary,grosspercent;

    printf("Enter Your Base Salary: ");
    scanf("%d",&base);

    printf("Enter How Much Percent Is Your HRA: ");
    scanf("%d",&hra);

    printf("Enter How Much Percent Is Your DA: ");
    scanf("%d",&da);

    printf("Enter How Much Percent Is Your TA: ");
    scanf("%d",&ta);

    grosspercent = (((base * hra) / 100) + ((base * da) / 100) + ((base * ta) / 100));
    grosssalary = base + grosspercent;

    printf("The Gross Salary is: %d",grosssalary);

    return 0;
}