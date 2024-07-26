#include<stdio.h>
main()
{
	int I = -3, j=2, k = 0,m;
	m = ++I && ++j || ++k;
	printf("\n%d %d %d %d", I, j, k, m);
}