#include<stdio.h>
static struct s
{
	unsigned a:5;
	unsigned b:5;
	unsigned c:5;
	unsigned d:5;
}v={1,2,3,4};
main()
{
	printf("size of v = %d",sizeof(v));

}