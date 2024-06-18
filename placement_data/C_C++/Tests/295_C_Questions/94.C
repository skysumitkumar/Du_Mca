#include<stdio.h>
int num[]={10,1,5,22,90};
main()
{
	int *p,*q;
	int i;
	p=num;
	q=num+2;
	i=*p++;
	printf("\n%d %d %d",(*(p--))--,q-p,*q--);
}