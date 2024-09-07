#include<stdio.H>
#define pxx(a,v) printf("\nval=%d",a##v)
main()
{
	int x1=12,x2=24,x3=35;
	pxx(x,1);
	pxx(x,2);
	pxx(x,2+1);

}