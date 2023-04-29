#include<stdio.h>
int main()
{
     FILE *file=NULL;
    file =fopen("text.txt","w");
     if(file==NULL)
     {
          printf("file doesn't exist\n");
     }
     else
     {
          printf("file is open\n");
          fclose(file);
     }
     return 0;
}
