#include<stdio.h>
main()
{
	int x=10,y,z;
	z=y=x;
	y-=x--;
	z-=x--;
	x-=--x-x--;
	printf("%d %d %d\n",x,y,z);
	z-=-x-----y;exit

	printf("%d",z);

}