	#include<stdio.H>
main()
{
	struct
	{
		a:1;
		b:2;
	}t;
	t.b=6;
	t.a=2;
	printf("%d %d",t.a,t.b);

}