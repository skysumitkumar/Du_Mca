#include<stdio.h>
#define str(x) #x
#define Xstr(X) str(X)
#define oper multiply
main()
{
	char *opername=Xstr(Addition);
	printf("%s",opername);

}