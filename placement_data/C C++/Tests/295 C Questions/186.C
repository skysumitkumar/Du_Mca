#include <stdio.h>

void main()
{
	struct emp
	{
		char emp[20];
		int empno;
		float sal;
	};
	struct emp member = { "TIGER"};
	printf(" %d %f", member.empno,member.sal);
}
