#define MAXI 100
main()
{
	int done,i,x=6;
	done=i=0;
	for(i = 0; (i< MAXI) && (x/=2)>1; i++)
		done++;
	printf("%d %d\n",i,done);
}