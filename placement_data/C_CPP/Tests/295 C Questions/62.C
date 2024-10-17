#include<stdio.h>
union
{
	int x;
	char y;
	struct
	{
		char x;
		char y;
		int xy;
	}p;
}q;
main()
{
   printf("%d",sizeof(q));
}