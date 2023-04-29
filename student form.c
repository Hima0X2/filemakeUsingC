#include<stdio.h>
int main()
{
     FILE *f;
     char name[100];
     int age,phone,n,i;
     f=fopen("student.txt","a");
      if(f=NULL)
     {
          printf("file don't find\n");
     }
     else
     {
          printf("file is open\n");
          printf("Enter number of students:");
          scanf("%d\n",&n);
          for(i=1;i<=n;i++)
          {
               printf("Enter name of students:");
              scanf("%s\n",&name);
              printf("Enter age of students:");
              scanf("%d\n",&age);
              printf("Enter phone number of students:");
              scanf("%s\n",&phone);
              fprintf(f,"\n%s\t%d\t%d\n",name,age,phone);
          }
     }
     fclose(f);
          return 0;
}
