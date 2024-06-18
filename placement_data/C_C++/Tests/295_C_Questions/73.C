#include<stdio.h>
main()
{
	long *p1,*p2;
	int j;
	char *p3;
    p1=&j;
	p2=p1+4;
	j=p2-p1;
	printf("%u %u %d\n",p1,p2,j);
	p3=p1-1;
	j=p1-p3;
	printf("%u %d\n",p3,j);
	j=p3-p1;
	printf("%d \n",j);



}
