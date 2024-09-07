#include<stdio.h>
main()
{
	char *s;
	char *fun();
	s=fun();
	printf("%s",s);
}
char *fun()
{
	char str[30];
	strcpy(str,"this is too simple");
	return(str);
}
