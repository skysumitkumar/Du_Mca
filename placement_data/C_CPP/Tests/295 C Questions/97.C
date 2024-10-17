#include<stdio.h>
abc(){printf("Jobs ");}
bcd(){printf("For ");}
cde(){printf("All ");}
main()
{
	int (*ptr[3])();
	ptr[0]=abc;
	ptr[1]=bcd;
	ptr[2]=cde;
	ptr[0]();
	ptr[1]();
	ptr[2]();

}