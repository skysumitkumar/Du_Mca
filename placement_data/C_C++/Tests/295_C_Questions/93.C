#include<stdio.h>
int fn(void);
void print(int, int (*)());
int i=10;
void main(void)
{
	int i=20;
	print(i,fn);
}
void print(int i,int (*fn1)())
{
	printf("%d\n",(*fn1)());
}
int fn(void)
{
	return(i-=5);
}