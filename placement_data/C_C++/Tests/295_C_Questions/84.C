#include<stdio.h>
main()
{
	int a[]={11,2,3,4,5,6};
	printf("%d",(&a[3]-&a[0]));
}
