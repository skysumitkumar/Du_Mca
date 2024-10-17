#include<stdio.h>
main()
{
	union d
	{
		unsigned int a:1;
		unsigned int b:2;
		unsigned :0;
        unsigned int d:1;
		unsigned int e:0;
	};
	union d aa;
	aa.a=1;
	aa.b=5;
	printf("d.aa.a=%d d.aa.b=%d",aa.a,aa.b);
}