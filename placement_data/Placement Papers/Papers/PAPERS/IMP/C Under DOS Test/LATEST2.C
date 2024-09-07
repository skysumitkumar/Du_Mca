#include<stdio.h>
int i=0;
char *ptr ="Lion\0ABCD";
main()
{
  int c;
  clrscr();
  while((c= *ptr++) !=0)
   i++;
   printf("%d",i);
}


