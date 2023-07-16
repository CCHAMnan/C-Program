#include<stdio.h>
int main()
{
    int num;
    printf("Input Number between 1-4 : ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("Please tell me your crush's name!\n");
        break;
    case 2:
        printf("What is your height?\n");
        break;
    case 3:
        printf("Please dance in front of the class!\n");
        break;
    case 4:
        printf("Please break a leg!");
        break;
    default:
        break;
    }

    return 0;
}