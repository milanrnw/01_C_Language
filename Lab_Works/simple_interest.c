//Write a Program to find Simple interest.
#include<stdio.h>
int main()
{
    double p,r,t,simple_interest,final_amount;
    printf("Hint: The principal is the amount that was initially borrowed/given");
    printf("\nEnter Principle Amount: ");
    scanf("%lf",&p);

    printf("\nHint: Rate of interest is a rate at which the principal amount is borrowed/given to/from someone for a certain time");
    printf("\nEnter The Rate Of Interest (%%) : ");
    scanf("%lf",&r);

    printf("\nHint: Time duration is the period for which the principal amount was borrowed/given .\n");
    printf("\nEnter Time Duration Of Amount To Be Paid ( in years ): ");
    scanf("%lf",&t);

    simple_interest = (p*r*t)/100;
    final_amount = p+simple_interest;

    printf("\nSimple Interest: %lf",simple_interest);
    printf("\nFormula: (Principle amount * Rate Of Interest * Time Duration) / 100");
    printf("\nTotal Amount To Be Paid In The End: %lf",final_amount);

    return 0;
}