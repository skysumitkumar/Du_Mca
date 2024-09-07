#include<stdio.h>
#define PRN printf("%d %d %d %d %d  %d",a[0],a[1],a[2],a[3],a[4],a[5]);
main()
{
	int a[]={0,1,2,3,4,5};
	PRN
	a[5,2]=7;
	PRN
}
