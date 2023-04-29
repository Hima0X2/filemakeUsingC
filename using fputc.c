#include<stdio.h>
int main()
{
     FILE *file;
     file =fopen("text.txt","w");
     char num[100]={"sanjida samanta"};
     int i,l=strlen(num);
     if(file==NULL)
     {
          printf("file doesn,t exist\n");
     }
     else
     {
          printf("file is open\n");
          for(i=0;i<l;i++)
          {
               fputc(num[i],file);
          }
          fclose(file);
     }
     return 0;
}
