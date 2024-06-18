void main()
{
	char *p="alqc";
	clrscr();
	printf("%c..",++*(p++));
	printf("%c",*++p);
	getch();
}
