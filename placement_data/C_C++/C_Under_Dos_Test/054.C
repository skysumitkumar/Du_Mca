void main()
{
	int i;
	clrscr();
	i=abc();
	printf("%d...",i);
	i=abc();
	printf("%d",i);
	getch();
}

static int abc()
{
	int i=1;	//Everytime i gets initilised.
	return i++;
}