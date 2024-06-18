#include<stdio.H>
main()
{
	void message();
	int c=2,b;
	printf("C before call %d\n",c);
	b=message();
	printf("C after call %d\n",c);
}
void message()
{
	printf("all is well that goes well");
}
