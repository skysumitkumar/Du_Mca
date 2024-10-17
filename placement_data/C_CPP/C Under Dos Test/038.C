void main()
{
	char **p=&"abcd";
	clrscr();
	printf("%c",*++*p);
	getch();
}
