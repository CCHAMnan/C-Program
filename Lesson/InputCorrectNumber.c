#include<stdio.h>
int main()
{
    int num = 0;

    printf("Please Enter A Number Between 10-20 \n");
    scanf("%d",&num);

    while (!((num<=20)&&(num>=10)))
    {
        if (num<=9)
        {
            printf("Your Number is too low! Please Try again \n");
            scanf("%d",&num);
        }
        else if(num>=21)
        {
            printf("Your Number is too high! Please Try again \n");
            scanf("%d",&num);
        }
    }
    printf("You Enter %d ,Thank You!!",num);
    
    return 0;
}