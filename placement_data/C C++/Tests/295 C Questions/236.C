#include<stdio.h>
main()
{
	int i =2,j;
	j = add(++i);
	printf("i = %d j = %d\n", i, j);
}
int add(int ii)
{
	ii++;
	printf("ii = %d\n", ii);
}