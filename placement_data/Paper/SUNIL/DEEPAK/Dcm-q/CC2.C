#include<conio.h>
#include<stdio.h>
union{

	long l;
	char c[4];
	struct {
		long i;
		char c[4];
		}s;
     }u;
 void main()
 {
 clrscr();
 u.l=0x4d4344;
printf("%lx\n%s",u.s.i,u.s.c);
 printf("\n%s",u.c);
 printf("\n size = %d",sizeof(u));
 }
