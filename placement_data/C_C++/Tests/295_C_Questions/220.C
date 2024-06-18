void test(int , int *);
main()
{
int * iptr, j, k = 2;
iptr = &j;
j = k;
printf( "%d %d ", k, j);
test(j, iptr);
printf("%d %d\n", k, j);
}
void test(int l, int *p)
{	l++;
	(*p)++;
}