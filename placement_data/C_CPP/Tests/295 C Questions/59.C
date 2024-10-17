#include<stdio.h>
main()
{
    int i=0;
	char *cat="cic\0test";
	while(strlen(*cat++))
	{
		i++;
		printf("%d\n",i);
	}
}