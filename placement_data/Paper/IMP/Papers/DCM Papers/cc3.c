#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  int v,a=0xf7,b=4,c=3;
  int fun(int,int,int);
  v=fun(a,b,c);
  printf("%d",v);
  getch();
}

fun(int a , int b, int c)
{
   int v;
   clrscr();
   printf("%d \t",(-10)>>1);
   v=((a>>(b+1-c)) & (~(~0<<c)));
   return(v);
 }

