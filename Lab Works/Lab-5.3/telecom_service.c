//Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.
#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Press 1 For English");
    printf("\nHindi Ke Liye 2 Dabaye");
    printf("\nGujarati Mate 3 Dabavo");

    printf("\nEnter Your Choice: ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("\nPress 1 for Internet recharge");
        printf("\nPress 2 for Top up recgarge");
        printf("\nPress 3 for Special recharge");
        printf("\nEnter your choice: ");

        scanf("%d",&b);

        switch (b)
        {
        case 1:
            printf("\nYou have sucessfully done Internet recharge");
            break;
        case 2:
            printf("\nYou have sucessfully done Top up recharge");
            break;
        case 3:
            printf("\nYou have successfully done Special recharge");
            break;
        }
        break;
    
    case 2:
    printf("\nInternet recharge ke liye 1 dabaiye");
    printf("\nTop up recharge ke liye 2 dabaiye");
    printf("\nSpecial recharge ke liye 3 dabaiye");
    printf("\nKripiya apni pasand chune: ");

    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("\nAapne safaltapurvak Internet Recharge kar liya he");
        break;
    case 2:
        printf("\nAapne safaltapurvak Top up recharge kar liya he");
        break;
    case 3:
        printf("\nAapne safaltapurvak Special recharge kar liya he");
        break;
    }
    break;

    case 3:
        printf("\nInternet Recharge mate 1 dabavo");
        printf("\nTop-up Recharge mate 2 dabavo");
        printf("\nSpecial Recharge mate 3 dabavo");
        printf("\nTamari pasand javavo: ");

        scanf("%d",&d);

        switch (d)
        {
        case 1:
            printf("\nTame safaltapurvak Internet Recharge karyu chhe");
            break;
        case 2:
            printf("\nTame safaltapurvak Top up Recharge karyu chhe");
            break;
        case 3:
            printf("\nTame safaltapurvak Special Recharge karyu chhe");
            break;
        }
        break;
    }
}
