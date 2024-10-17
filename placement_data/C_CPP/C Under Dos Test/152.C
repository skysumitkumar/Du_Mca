void main()
{
	union  {
			int i;
			char j;
		  } xyz;
	clrscr();
	xyz.i=300;
	printf("%d",xyz.j);
	getch();
}





