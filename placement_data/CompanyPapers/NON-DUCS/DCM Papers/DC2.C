#include<stdio.h>
f(int a, int b,int c)
{
   return(a>>(b+1-c)& ~(~0<<c));
}
main()
{
   printf("\n%d",f(0xf7,4,3));
}