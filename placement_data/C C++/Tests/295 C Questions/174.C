#include<stdio.h>
main()
{
	int a=10,*j;
	void *k;
	j=&a;
	k=&a;
	printf("\n%d %d",*j,*k);
}