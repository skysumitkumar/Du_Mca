#include<stdio.h>
main()
{
	extern int i;
	i=20;
	printf("%d",sizeof i );
}