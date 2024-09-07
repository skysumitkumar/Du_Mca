#include<stdio.h>
struct A
{
	int a;
	char b;
};
main()
{
    struct A* B;
	B=(struct A*)malloc(sizeof(struct A));
	B->a=65;
	B.b=B->a;
	putchar(B->b);

}