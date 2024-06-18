#include<stdio.h>
main()
{
	int a=0,b=1;
	printf("%d",!(a^=!(a~=(b>>4>>4<<2))));
}
