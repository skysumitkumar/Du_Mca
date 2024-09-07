#include<stdio.h>
#define void int
int i=300;
void main(void)
{
	int i=200;
	{
		int i=100;
		printf("\n%d",i);
	}
	printf("\n%d",i);

}