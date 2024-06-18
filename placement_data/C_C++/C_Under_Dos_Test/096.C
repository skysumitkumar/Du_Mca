void main()
{
	char a[5];
	clrscr();
	abc(a);
	printf("%d",a[2]);
	getch();
}

abc(int a[])
{
	a++;
	a[1]=100;
}