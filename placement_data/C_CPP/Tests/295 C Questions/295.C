#include<stdio.h>
main()
{
	union alpha
	{
		int a;
		float b;
	} u1;
	u1.a=12;
	printf("%d %f",u1.a ,u1.b);
}