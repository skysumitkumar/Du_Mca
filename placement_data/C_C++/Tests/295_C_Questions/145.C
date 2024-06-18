#include<stdio.h>
main()
{
	static int a[]={0,1,2,3,4};
	static int *p[]={a,a+1,a+2,a+3,a+4};
	int **ptr=p;
	printf("\n %u %u",a,*a);
	printf("\n %u %u %u",p,*p,**p);
    printf("\n %u %u %u",ptr,*ptr,**ptr);
}