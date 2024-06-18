void main()
{
	struct xyz {
				int i;
			 };
	struct xyz xyz;
	int i=20;
	xyz.i=10;
	clrscr();
	printf("%d...%d",i,xyz.i);
	getch();
}