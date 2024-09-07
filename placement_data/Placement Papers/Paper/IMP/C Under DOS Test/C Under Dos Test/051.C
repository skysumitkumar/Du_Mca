void main()
{
	int i;
	clrscr();
	i=abc();
	printf("%d...",i);
	i=abc();
	printf("%d",i);
	getch();
}
abc()
{
	return 10;
	return 100;
}