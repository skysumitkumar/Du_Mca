#include<stdio.H>
struct titbit
{
	int tit;
	int bit;
}
main()
{
	struct titbit tt;
	tt.tit=10;
	tt.bit=20;
	printf("titbit%d",tt.tit+tt.bit);
}