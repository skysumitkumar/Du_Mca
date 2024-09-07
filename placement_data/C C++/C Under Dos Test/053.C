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
static int abc()
{
	int i=1;
	return i++;
}