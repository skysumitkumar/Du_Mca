#define INTPTR int *
main()
{
	INTPTR pi, pj;
	int i,j;
	i=10;j=20;
	pi = &j;
	pj = &j;
	j++;
	i= *pi;
	printf("%d,",i);
	j++;
	i= *pj;
	printf("%d",pj);
 }