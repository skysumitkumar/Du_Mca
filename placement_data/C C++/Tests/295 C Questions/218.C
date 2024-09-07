main()
{
	const int i = 100;
	int *p = &i;
	*p = 200;
	printf("%d\n",i);
}