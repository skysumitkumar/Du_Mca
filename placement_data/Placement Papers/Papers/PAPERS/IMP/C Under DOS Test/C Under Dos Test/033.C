void main(argc,argv)
int argc;
char *argv[];
{
	clrscr();
	printf("%c",++*++*++argv);
	getch();
}
