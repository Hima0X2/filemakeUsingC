#include<stdio.h>
int main()
{
     FILE *f;
     char b[100];
     f=fopen("text.txt","a");
     if(f=NULL)
     {
          printf("can't find\n");
     }
     else
     {
          printf("file is open\n");
          while(!feof(f))
          {
            fgets(b,100,f);
            printf("%s\n",b);
          }
           fclose(f);
     }
     return 0;
}
