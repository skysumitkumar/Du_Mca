#include <stdio.h>
struct _tag
{
	int i;
	union
	{
		int a;
		int b;
	 }c;
 } a;
 main()
{
	a.c.a=10;
	printf("test %d\n",a.c.b);
}