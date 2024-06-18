void main()
{
	struct xyz {
			   int i;
			 };
	struct xyz *p;
	struct xyz a;
	clrscr();
	p=&a;
	p->i=10;
	printf("%d",(*p).i);
	getch();
}