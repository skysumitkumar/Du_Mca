#include<stdio.h>
main()
{
	static int a[2][3]={{-3,14,5},{1,-10,8}};
	int j=1,k=2;
	printf("%d %d %d\n",*(a[j]+k),*(a[j+k-2]),(*(a+j))[k]);
	printf("%d %d \n",(*(a+k-1))[j],*((*(a+j))+k));
	printf("%d %d \n", **(a+j) +k,*(&a[0][0]+j+k));
}
