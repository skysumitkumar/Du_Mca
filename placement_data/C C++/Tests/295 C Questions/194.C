#include <stdio.h>
void swap(char *,char *);
void rev(char *);
main()
{
	char *name="ravindra";
	char x='a',y='b';
	swap(name+1,name+3);
	printf("name is %s\n",name);
	fflush(stdout);
	exit(1);
	rev(name);
	name[7]='\0';
	rev(name);
	printf("name is %s\n",name);
}
void swap(char *x,char *y)
{
	char tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}
void rev(char *s)
{
	int i,n;
	printf("inside rev\n");
	n=strlen(s);
	for(i=0;i< n/2 ; i++)
	{
		swap(&s[i],&s[n-1-i]);
	 }
	 return;
 }