#include<stdio.h>
int i=0;
char *ptr = "Lion\0ABCD";
main()
{
  while(*ptr++)
  {
      i++;
  printf("%d ",i);
  }
}
