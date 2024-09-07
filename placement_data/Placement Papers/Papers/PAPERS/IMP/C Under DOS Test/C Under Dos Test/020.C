void main()
{
	union bbb {
		struct {
				int a : 1;
				int b : 1;
				int c : 1;
				int d : 1;
				int e : 1;
				int f : 1;
				int g : 1;
				int h : 1;
			  } aaa;
		  char x;
		    };
	union bbb pqr;
	clrscr();
	pqr.aaa.a=pqr.aaa.b=
	pqr.aaa.c=pqr.aaa.d=1;
	pqr.aaa.e=pqr.aaa.f=
	pqr.aaa.g=pqr.aaa.h=1;

	printf("%d",pqr.x);
	getch();
}