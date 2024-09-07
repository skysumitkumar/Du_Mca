struct xxx  {
			int i;
			char j;
		  };

void main()
{
	struct xxx zzz={110,65};
	clrscr();
	abc(zzz);
	getch();
}

abc(struct xxx a)
{
	printf("%d...%c",a.i,a.j);
}