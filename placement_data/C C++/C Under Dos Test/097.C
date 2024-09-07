void main()
{
	char a[5];
	clrscr();
	abc(a);
	printf("%d",a[4]);
	getch();
}

abc(int a[])
{
	a++;
	a[1]=612;
}