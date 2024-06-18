static int i=100;
void main()
{
	static int i=200;
	clrscr();
	abc();
	printf("%d...",i);
	getch();
}

abc()
{
	static int i=300;
	printf("%d...",i);
}
