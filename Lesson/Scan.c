#include<stdio.h>
int main(){

    int id;
    char name[20];
    int age;
    char gender[10];
    char address[100];

    printf("Please enter your ID:");
    scanf("%d",&id);
    printf("Please enter your name:");
    scanf("%s",&name);
    //gets(name);
    printf("Please enter your age:");
    scanf("%d",&age);
    printf("Please enter your gender:");
    scanf("%s",&gender);
    //gets(gender);
    printf("Please enter your address:");
    scanf("%s",address);
    //gets(address);

    printf("=======Your information=======\n");
    printf("ID = %d\n", id);
    printf("Name = %s\n", name);
    printf("Age = %d\n", age);
    printf("Sex = %s\n", gender);
    printf("Address = %s\n", address);
    return 0;



}