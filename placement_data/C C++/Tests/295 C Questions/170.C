#include<stdio.h>
#define check(p,q,c) (c t;t=p;p=q;q=t;)
main()
{
	int p=5,q=10;
	check(p,q,int);
	printf("%d %d",p,q);
}