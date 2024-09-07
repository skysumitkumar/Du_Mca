 main()
{
	struct {
			int i;
		   }xyz;
	clrscr();
	(*xyz)->i=10;
	printf("%d",xyz.i);
}