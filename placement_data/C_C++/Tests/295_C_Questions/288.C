Swap( int *x , int *y)
{
	int tmp = *x ;
	*y = *x ;
	*x = tmp;
}
main()
{
	int a = 1, b = 2;
	Swap(&a, &b);
	printf("%d %d\n", a, b);
 }