void main()
{
	union {
		union {
				char a;
				char b;
				char c;
				char d;
			 }   car;
		union {
				char i;
				char j;
			  }in;
		char z;
		} pqr;
	clrscr();
	printf("%d",sizeof(pqr));
	getch();
}