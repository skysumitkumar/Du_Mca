#define DEBUG(args) (printf("DEBUG: "), printf args)
main()
{
	int n = 0,i = 0 ;
	printf("%d\n", n);
	if(n != 0)
		DEBUG(("n is %d\n", n));
	DEBUG(("%d",i));
}