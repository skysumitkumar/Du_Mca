#define INC #include
INC <stdio.h>
main()
{
	static int i=10,*j,**k;
	j=&i;
	k=&j;
	j++;
	printf("%u %u",j,k);
}