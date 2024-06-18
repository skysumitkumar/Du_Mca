main()
{
	int a[] = {0,1,2,3,4};
	int *p[] = {a,a+1,a+2,a+3,a+4};
	int **pp = &p;
	printf("%d, %d, %d ", *pp-a, pp-p, **pp);
	pp++;
	pp++;;
	++pp;
	*++pp;
	printf("%d, %d, %d ", pp-p, *pp-a, **pp);
 }