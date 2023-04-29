#include<stdio.h>
int main()
{
     FILE *f;
     char a[100],b[100];
     f=fopen("text.txt","r");
     if(f==NULL)
     {
          printf("can't find\n");
     }
     else
     {
          printf("file is open\n");
          sscanf(f,"%s %s",&a,&b);
          printf("%s %s",a,b);
           fclose(f);
     }
     return 0;
}
