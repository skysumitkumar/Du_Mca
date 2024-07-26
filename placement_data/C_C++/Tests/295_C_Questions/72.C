#include<stdio.h>
main()
{
	extern int i;
	double x=3.00;
	long j=34L;
	f(j,x);
}
f(float f,short p)
{
	printf("%f ",f);
	printf("% d",p);
}
