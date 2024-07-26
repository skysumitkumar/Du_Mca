#include<stdio.h>
#define abs(x) x>0?x:-x
#define mabs(x) (((x)>=0)?(x):-(x))
int fabs(int);
main()
{
	printf("\n%d   %d",10-abs(10),abs(-10)+1);
	printf("\n%d   %d",mabs(10)+1,mabs(-10)+1);
	printf("\n%d   %d\n",fabs(10)+1,fabs(-10)+1);
}
int fabs(int n)
{
	return(n>0? n: -n);
}