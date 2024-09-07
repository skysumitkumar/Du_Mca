#include<stdio.h>
main()
{
	union
	{
		enum tag{low=10,medium=20};
		int y;
	}d;
	int p;
	d.y=10;
	p=d.10;
	printf("%d",p);
}