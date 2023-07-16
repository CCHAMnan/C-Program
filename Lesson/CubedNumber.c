#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    int nCubed = (int)(pow(n,3));

    while (nCubed < 12000) {
        n++;
        nCubed = (int)(pow(n,3));
    }

    printf("The highest integer below 12000 is %d\n",n-1);


    return 0;
}