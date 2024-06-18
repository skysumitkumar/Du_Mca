void main()
{
	struct xyz  {
				int i;
			  };
	struct xyz *p;
	struct xyz a={0};
	clrscr();
	*p=a;
	p->i=10;
	printf("%d",a.i);
	getch();
}