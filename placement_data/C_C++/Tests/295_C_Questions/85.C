#include<stdio.h>
#define cat(x,y) x##y
main()
{
	printf("%d",cat(cat(cat(3,3),cat(3,4)),5));

}
