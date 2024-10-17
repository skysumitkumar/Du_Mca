#include <stdio.h>
#define colums 4
#define rows 3
main()
{
   int i,j,k;
   int a[rows][colums]={1,2,3,4,5,6,7,8,9,10,11,12};
   i=j=k=99;
   for(i=0;i<rows;i++)
	  for(j=0;j<colums;j++)
		    if(a[k][j]<k)
				k=a[i][j];
	printf("%d\n",k);

}