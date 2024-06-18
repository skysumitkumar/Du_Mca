#include <stdio.h>
main()
{
	int x;
	x = 3;
	f(x);
	printf("MAIN");
}
f(int n)
{
	printf("F");
	if (n != 0)
		f(n-1);
}