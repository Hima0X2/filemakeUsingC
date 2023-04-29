#include<stdio.h>
#include<stdlib.h>
int main()
{
     FILE *f,*q;
   int ch;
   q=fopen("image1.jpg","rb");
   if(f==NULL)
   {
        perror("File opening failed");
        return EXIT_FAILURE;
   }
   f=fopen("image2.jpg","wb");
   while(1)
   {
        ch=fgetc(f);
        if(ch==EOF)
        {
             break;
        }
        fputc(ch,q);
   }
   fclose(f);
   fclose(q);
     return 0;
}
