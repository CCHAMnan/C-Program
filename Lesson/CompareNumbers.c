#include<stdio.h>
int main()
{
    int a, b;
   
    printf("Please Input 2 Numbers.\n");
    scanf("%d %d",&a,&b);


    // if ((a>b)&&(a>c))
    // {
    //     printf("%d is the biggest number!",a);
    // }
    // if ((b>a)&&(b>c))
    // {
    //     printf("%d is the biggest number!",b);
    // }
    // if ((c>a)&&(c>b))
    // {
    //     printf("%d is the biggest number!",c);
    // }

    // if (b > Max)
    // {
    //     Max = b;
    // }
    // if (c > Max)
    // {
    //     Max = c;
    // }
    // printf("%d", Max);

    if(a>b)
    {
        printf("%a is the biggest number!",a);
    }
    else
    {
        printf("%d is the biggest number!",b);
    }
    
    
    return 0;
}