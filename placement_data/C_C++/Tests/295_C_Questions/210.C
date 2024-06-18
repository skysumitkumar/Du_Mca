void abc(int *i, int *j);
main()
{
	int i = 5, j=10;
	abc(&i,&j);
	printf("%d %d",i,j);
}
void abc(int *i, int *j)
{
	*i = *i + *j;
	*j = *i - *j;
	*i = *i - *j;
	return;
}