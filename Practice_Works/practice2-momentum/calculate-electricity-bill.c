/*

Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/
#include<stdio.h>
int main()
{
    double final,k;
    double u1=0.50,u2=0.75,u3=1.20,u4=1.50;
    double a;
    printf("enter electricity unit: ");
    scanf("%lf",&a);

    if(a >= 0 && a <= 50)
    {
       k =  a*u1;
    }
    else if(a > 50 && a <= 150)
    {
        k = 50*u1 + (a - 50)*u2;
    }
    else if(a > 150 && a <= 250)
    {
       k = 50*u1 + 100*u2 + (a-150)*u3;
    }
    else if(a > 250)
    {
         k = 50*u1 + 100*u2 + 100*u3 + (a-250)*u4;
    }

    final = k + k*20/100;
    printf("Electricity Bill: %lf",final);
}