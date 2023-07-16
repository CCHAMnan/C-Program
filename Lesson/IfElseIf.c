#include<stdio.h>
int main()
{
    int payment, total_payment;
    int dis_20, dis_15, dis_10, dis_5;

    printf("How much does your computer cost?\n");
    scanf("%d",&payment);

    if (payment>=1500)
    {
        dis_20 = payment*20/100;
        total_payment = payment - dis_20;
    }
    else if (payment>=1000)
    {
        dis_15 = payment*15/100;
        total_payment = payment - dis_15;
    }
    else if (payment>=800)
    {
        dis_10 = payment*10/100;
        total_payment = payment - dis_10;
    }
    else if (payment>=400)
    {
        dis_5 = payment*5/100;
        total_payment = payment - dis_5;
    }
    else 
    {
        total_payment = payment;
    }

    printf("You have to pay %d$!",total_payment);
    




    return 0;
}
