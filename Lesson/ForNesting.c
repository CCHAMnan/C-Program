#include<stdio.h>
int main()
{
    int row,col, num;   
    home:
    printf("Input Number of Row = ");
    scanf("%d", &num);
    for(row=1;row<=num;++row)
    {
        for(col=1;col<=num-1;++col)
        printf("  ");
        printf("%d", row);
        printf("\n");
    }
    goto home;
    return 0;
}