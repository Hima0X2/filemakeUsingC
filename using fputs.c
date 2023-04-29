#include<stdio.h>
int main()
{
     FILE *file;
     file =fopen("text.txt","w");
     char num[100];
     if(file==NULL)
     {
          printf("file doesn,t exist\n");
     }
     else
     {
          printf("file is open\n");
         printf("Enter your full name: ");
         gets(num);
         fputs(num,file);
          fclose(file);
     }
     return 0;
}

