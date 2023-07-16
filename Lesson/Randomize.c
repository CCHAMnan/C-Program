#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ac_on_off(int temp);
int main()
{   
    int temp;
    srand(time(NULL));
    temp = rand()%40 + 10;
    printf("Temp: %d ",temp);
    ac_on_off(temp);
    return 0;

}

void ac_on_off(int temp)
{
    if (temp >= 28)
    {
        printf("AC On");
    }
    else if (temp <= 18)
    {
        printf("AC Off");
    }
    
}