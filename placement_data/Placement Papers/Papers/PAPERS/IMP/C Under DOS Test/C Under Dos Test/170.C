struct xxx  {
			int i;
			char j;
		  };

void main()
{
	struct xxx zzz={10,'a'};
	clrscr();
	abc(zzz);
	getch();
}

abc(struct xxx a)
{
	printf("%d...%c",a.i,a.j);
}