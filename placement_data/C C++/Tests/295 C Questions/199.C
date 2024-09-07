#include<stdarg.h>
void show(va_list ptr);
void display(char *s,...);
void show(va_list ptr)
{
	int a;
	a=va_arg(ptr,int);
	printf("\n %d",a);
	return;
}
void display(char *s,...)
{
	int n;
	va_list ptr;
	va_start(ptr,s);
	n=va_arg(ptr,int);
	show(ptr);
}
main()
{
	display("hello",4,12,13,14,44);
}