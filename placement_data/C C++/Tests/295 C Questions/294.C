#include<stdio.h>
main()
{
	float a=5,t;
	char *p;
	p=(char *)&a;
	printf("byte 1 %u %d ",p,*p);
	p++;
	printf(" \nbyte 2 %u %d",p,*p);
	p++;
	printf(" \nbyte 3 %u %d ",p,*p);
	p++;
	printf(" \nbyte 4 %u %d",p,*p);
}
