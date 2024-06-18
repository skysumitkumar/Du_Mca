#include<stdio.h>
struct fprintf {
					int i;
			};

void main()
{
	int fprintf;
	struct fprintf cprintf;
	clrscr();
	cprintf.i=10;
	printf("%d",cprintf.i);
	getch();
}
