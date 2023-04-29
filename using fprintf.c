#include<stdio.h>
int main()
{
 FILE *f;
     char a[100];
     int b;
     f=fopen("text.txt","w");
     if(f==NULL)
     {
          printf("can't find\n");
     }
     else
     {
          printf("file is open\n");
          printf("Enter your name:");
          scanf("%s",&a);
           printf("Enter your age:");
          scanf("%d",&b);
          fprintf(f,"name = %s , age= %d ",a,b);
          printf("File is written successfully\n");
           fclose(f);
     }
     return 0;
}
