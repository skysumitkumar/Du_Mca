#include<stdio.h>
main()
{
	unsigned int a,b,c,d,e,f;
	a=b=c=d=e=f=32;
	a<<=2;
	b>>=2;
	c^=2;
	d|=2;
	e&=2;
	printf("%d %d %d %d %d ",a,b,c,d,e);
}