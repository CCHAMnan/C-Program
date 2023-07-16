#include<stdio.h>
int main (){
    
    int year;
    printf(" Please enter how many year you work: ");
    scanf("%d",&year);
    if (year>= 3){
        printf("You salary is = %d \n", 2000+1000);
    }
    else{
        printf("Your salary is = %d \n", 600+250);
    }
return 0;
}