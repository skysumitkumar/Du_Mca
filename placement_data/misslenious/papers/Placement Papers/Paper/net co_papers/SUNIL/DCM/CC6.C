#include<stdio.h>
#include<conio.h>
int a=66;
fun(int b)
{
printf("%c",b);
return(a);
}

void main()
{
  int a=65;
  clrscr();
  printf("%d", a);
  a = fun(a);
  printf("%c", a);
  }
