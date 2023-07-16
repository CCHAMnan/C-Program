// #include<stdio.h>
// void sum_of_N(int n);
// int main()
// {   
    
//     sum_of_N(0);

//     return 0;
// }

// void sum_of_N(int n)
// {
//     int sum=0,num=2;
//     printf("Input Number of N = ");
//     scanf("%d",&n);
//     while (num <= n)
//     {
//         sum = sum+num;
//         num = num*2;
//     }
//     printf("%d",sum);
    
// }

// C program to find length of the string without using strlen() function
#include <stdio.h>
int main()
{
char s[100];
int i;

printf("Enter a string: ");
scanf("%s",&s);

for(i = 0; s[i] != '\0'; ++i);

printf("Length of string: %d", i);
return 0;
}




