#include<stdio.h>
main()
{
	char c=-64;
	int i=-32;
	unsigned int u =-16;
	if(c>i)
	{
		printf("pass1");
		if(c<u)
			printf("pass 2");
		else
			printf("fail 2");
	}
	else
		printf("fail 1");
    if(i<u)
		printf("pass2");
	else
		printf("fail2");

}