#include<stdio.h>
main()
{
	register int k;
	int *p;
	k=9;
	p=&k;
	printf("The value of k=%d %d",k,*p);
}