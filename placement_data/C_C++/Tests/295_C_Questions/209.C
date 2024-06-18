main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int i,j;
	for (j=2;j>=0;j--)
	{
	  for(i=2;i>=0;i--)
	  {
		printf("\n%d",*(*(arr+i)+j));
		printf("\n TATATATA");
	  }
	}
 }