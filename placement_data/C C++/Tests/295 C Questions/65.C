#include<stdio.h>
#define INT 1
main()
{
	struct a
	{
		int type;
	};
	struct b
	{
		int type;
		int e;
	};
	struct c
	{
		int type;
		float f;
	};
	union
	{
		struct a n;
		struct b ni;
		struct c nf;
	}all;
	all.ni.type=INT;
	all.nf.f=10;
	all.ni.e=1;
	if(all.nf.type==INT)
		printf("float value =%2.1f",all.nf.f);
	if(all.ni.type==INT)
		printf("\ninteger value=%d",all.ni.e);

}