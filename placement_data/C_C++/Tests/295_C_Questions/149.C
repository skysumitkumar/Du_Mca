#include<stdio.h>
#include<string.h>
char *strct(char str[],char c)
{
	int i=0;
	while(i<=strlen(str))
	{
		if(str[i]==c)
			str[i+1]='\0';
		i++;
	}
	return str;
}
main()
{
	char a[20]="Hello World";
	printf("\n%s",strct(a,'l'));
}