#include<stdio.h>
#include<conio.h>
union{
	long une;
	char abc[4];
	struct{
		   short s1;
		   short s2;
		   }u_struct;
	 }u;
main()
{
  u.une=0x4d4344;
  printf("\n%x %x ",u.u_struct.s1,u.u_struct.s2);
  printf("\n%s",u.abc);
}
