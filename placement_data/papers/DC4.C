#include<stdio.h>
main()
{
  int num1,num2;
  clrscr();
  num1=recsum(1);
  num2=recsum(2);

  printf("\n%d %d ",num1,num2);
  getch();
}
recsum(int var)
{
  static int sum=0;
  if(var==3)
	  return sum;
  else
  {
	 var++;
	 recsum(var);
  }
  sum=sum+var;
  return sum;
}