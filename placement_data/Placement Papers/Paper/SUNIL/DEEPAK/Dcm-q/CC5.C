#include<conio.h>
#include<stdio.h>
#include<string.h>
char *fun(char *pt)
{
 char *p = "data system";
 clrscr();
 pt=p;
 printf("%s",pt);
  return(pt);
 }
void main()
{
  char *pp = "dcm";
  fun(pp);
  printf("\n%s",pp);
  }
