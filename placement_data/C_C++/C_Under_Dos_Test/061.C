void main()
{
	union {
		struct {
				char a;
				char b;
				char c;
				char d;
			  } car;
		struct {
				int i;
				int j;
			  }in;
		long z;
		float f;
		double m;
		} pqr;
	clrscr();
	printf("%d",sizeof(pqr));
	getch();
}