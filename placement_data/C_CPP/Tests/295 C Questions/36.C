#include<stdio.H>
main()
{
	struct s
	{
		char *p;
	};
	static struct s a[]={"RAVI"};
	struct s *pp=a;
	printf("\n%s",++(pp->p));
}