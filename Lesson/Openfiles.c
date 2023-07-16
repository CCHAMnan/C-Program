#include<stdio.h>
#include<stdlib.h>

// Input Infomation to the File

int main()
{  
   char name[50],gender[10];
   int age, score;
   FILE *fp;
   fp = fopen("Data.txt","w");
   if(fp == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Input Information Below.\n");
   printf("<==============================>\n\n");
   printf("Enter name of the student: ");
   scanf("%s",&name);
   printf("Enter age of the student: ");
   scanf("%d",&age);
   printf("Enter gender of the student: ");
   scanf("%s",&gender);
   printf("Enter score of the student: ");
   scanf("%d",&score);
   fprintf(fp,"%s  %d  %s  %d",name,age,gender,score);
   printf("\n");
   printf("<===============================>\n");
   fclose(fp);
   
   return 0;
}

//Read the File //"EOF = End of file"

// int main()
// {  
//    char name[50], gender[10];
//    int age,score;
//    FILE *fp;
//    fp = fopen("Data.txt","r");
//    if(fp == NULL)
//    {
//       printf("Error!");
//       exit(1);
//    }
//    printf("Input Information Below: \n\n");
//    printf("Name:\t\tAge:\t\tGender:\t\tScore:\n");
//    while(fscanf(fp,"%s  %d  %s  %d",&name,&age,&gender,&score) != EOF) 
//       {
//          printf("%s\t\t%d\t\t%s\t\t%d\n",name,age,gender,score);
//       }
//    printf("\n");
//    printf("=======================================================");
//    fclose(fp);

//    return 0;
// }