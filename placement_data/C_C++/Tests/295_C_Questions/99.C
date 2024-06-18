#include<stdio.h>
main()
{
	float a;
	float *i;
	unsigned int j;
	i=&a;
	a=-2.3;
	j=*i;
	printf("%u",j);

}