#include<stdio.h>
int main()
{
    // int num = 1;
    // int n;
    // int Even_num = 0;
    // int Odd_num = 0;

    // printf("Enter a number = ");
    // scanf("%d",&n);
    
    // while(num<=n)
    // {
    //     if(num%2==0)
    //     {
    //         Even_num++;
    //         num++;
    //     }
    //     else
    //     {
    //         Odd_num++;
    //         num++;
    //     }
    // }
    //      printf("Number of Even number = %d \n",Even_num);
    //      printf("Number of Odd number = %d \n",Odd_num);

    // for (Installization, Expression; update)
    // {
        // statement;
    // }

    int n;
    int even_num = 0, odd_num = 0;

    printf("Input");
    scanf("%d", &n);

    for (int num = 1; num<=n; num++)
    {
        if(num%2==0)
        {
            even_num++;
        }
        else
        {
            odd_num++;
        }
    }
        printf("Number of Even number = %d \n",even_num);
        printf("Number of Odd number = %d \n",odd_num);

    return 0;
}