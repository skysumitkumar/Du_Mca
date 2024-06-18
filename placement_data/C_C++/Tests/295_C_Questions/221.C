#include <stdio.h>
int myfunc(char *str)
{
	char *ptr =str;
	while(*ptr++);
	return ptr-str-1;
}
main()
{
	printf("%d", myfunc("DESIS"));
}