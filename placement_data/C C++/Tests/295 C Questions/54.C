#include<stdio.h>
#define TEN LEN
main()
{
	enum digit {TEN,TWENTY,ONE=0};
	int mydigit=TEN+ONE;
	printf("%d",mydigit);
}