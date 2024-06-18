#include<stdio.h>
char *ptr ="dcm";
main()
{
 int ch;
 clrscr();
 while(ch = *ptr++)
 {
 /* ch = ch*/
  printf("\t%d",ch);
 }
}


