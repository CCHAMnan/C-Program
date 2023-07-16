#include<stdio.h>
int main()
{
    int num;
    int r_money, b_money, d_money;
    int total_usd, total_riel, total_baht;
    printf("What currency do you want to exchange to? \n");
    home:
    printf("Please choose these options from 1-4 \n");
    printf("Option 1: From Riel to Dollar \n");
    printf("Option 2: Fro Dollar to Riel \n");
    printf("Option 3: From Riel to Baht \n");
    printf("Option 4: From Baht to Riel \n");
    printf("Your Option = ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Please Input Riel Money = ");
        scanf("%d",&r_money);
        total_usd = r_money/4000;
        printf("Your Total Money = %d$\n", total_usd);
        goto home;
        break;
    case 2:
        printf("Please Input Dollar Money = ");
        scanf("%d",&d_money);
        total_riel = d_money*4000;
        printf("Your Total Money = %dRiel\n", total_riel);
        goto home;
        break;
    case 3:
        printf("Please Input Riel Money = ");
        scanf("%d",&r_money);
        total_baht = r_money/100;
        printf("Your Total Money = %dBaht\n", total_baht);
        goto home;
        break;
    case 4:
        printf("Please Input Baht Money = ");
        scanf("%d",&b_money);
        total_riel = b_money*100;
        printf("Your Total Money = %dRiel\n", total_riel);
        goto home;
    default:
        break;
    }

    return 0;
}