#include<stdio.h>
#define swap1(a,b) a=a+b;b=a-b;a=a-b;
main()
{
	int x=5,y=10;
	swap1(x,y);
	printf("%d %d\n",x,y);
	swap2(x,y);
	printf("%d %d\n",x,y);
}

int swap2(int a,int b)
{
	int temp;
	temp=a;
	b=a;
	a=temp;
	return;
}
