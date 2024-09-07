aaa()
{	printf("Hi");	}

bbb()
{	printf("Hello");	}

ccc()
{	printf("Bye");	}

void main()
{
	int (*ptr[3])();
	clrscr();
	ptr[0]=aaa;
	ptr[1]=bbb;
	ptr[2]=ccc;
	ptr[2]();
	getch();
}