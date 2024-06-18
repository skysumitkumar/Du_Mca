#include<alloc.h>

main()
{
	int *iptr,*dptr, i;
	dptr = (int *)malloc(sizeof(i));
	iptr =&i ;
	*iptr = 10;
	free(iptr);
	*dptr = 20;
    dptr = iptr;
	free(dptr);
	printf("%d,%d,%d",*dptr,i,*iptr);
}