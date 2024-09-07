main()
{
	int a[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12} ;
	int i,j,k=99 ;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(a[i][j] < k)
				k = a[i][j];
	printf("%d", k);
}