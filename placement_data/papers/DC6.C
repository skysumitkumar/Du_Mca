#include<stdio.h>
#define formula(a,b) dcm(a*a,b*b)
main()
{
 int first=3,second=4;
 printf("%d   ",formula(first,second));
 printf("%d   ",formula(first++,second++));
}
dcm(int var1,int var2)
{
 int result;
 result=var1+var2;
 return(result);
}