#define MAXI 100
main()
{
	int done,i,x=6;
	done=i=0;
	while (i < MAXI && !done)
	{
		if ((x/=2)>1)
		{
		 	i++;
			continue;
		 }
		 done++;
	}
	printf("%d %d\n",i,done);
 }