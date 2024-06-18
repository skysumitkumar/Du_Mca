#include<stdio.H>
main()
{
    int i=2,**j,***k,*h;
	h=&i;
	j=&h;
	k=&i;
	printf("%u %u %u",h,j,k);
}