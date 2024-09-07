#include<stdio.h>
main()
{
	static int i=1;
	i++;
	printf(" hello \n");
	if(i<5)
		(*main)();
}