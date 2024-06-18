#include<string.h>
main()
{
	char strp[] = "Never ever say no";
	char *chp, c='e';
	int i,j;
	chp = strrchr(strp, c);
	i = chp-strp;
	for(j=0;j<=i;j++)
		printf("%c",strp[j]);
}