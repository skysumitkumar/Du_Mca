#include<stdio.h>
int i,j,num=1;
main()
{
  for(i=0;i<=100;i++)
  {
    for(j=0;j<=100;j++)   /*102 + 101*100*/
    num+=1;
  }
  printf("\n%d",num);
}
