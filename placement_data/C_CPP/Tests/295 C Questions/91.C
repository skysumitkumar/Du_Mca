#include<stdio.h>
static int i=5;
main()
{
	int sum=0;
	do
	{
		sum+=(1/i);
	}while(0<i--);
}