int *NEXT(register int  i)
{
	int *ipt;
	ipt = &i;
	ipt++;
	return ipt;
}
main ()
{
	int j;
	printf("%d",(NEXT(j)));
}