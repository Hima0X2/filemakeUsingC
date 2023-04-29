#include<stdio.h>
int main()
{
     FILE *p;
     int x;
     x=remove("image.jpg");
     if(x!=0)
     {
          printf("file removd failed\n");
     }
     else
     {
           printf("file removd successfully\n");
     }
     return 0;
}
