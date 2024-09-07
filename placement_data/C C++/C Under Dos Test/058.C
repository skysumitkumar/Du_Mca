void main()
{
	union {
		struct  {
				char a;
				char b;
				char c;
				char d;
			} car;
		struct  {
				int i;
				int j;
			}in;
		long z;
		 } pqr;

	clrscr();
	pqr.car.a=3;
	pqr.car.b=2;
	pqr.car.c=1;
	pqr.car.d=0;
	printf("%d...%d...%ld",pqr.in.i,pqr.in.j,pqr.z);
	getch();
}

