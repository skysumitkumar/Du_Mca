#include<stdio.h>
main()
{
	int a ;
	a=abc();
	printf("\n %d this is fisrt a:",a);
	a=abc();
	printf("\n %d this is second a:",a);
}
abc()
{
	int i=23;
	if(1>0)
		return();
	i++;
	return(++ i);
}