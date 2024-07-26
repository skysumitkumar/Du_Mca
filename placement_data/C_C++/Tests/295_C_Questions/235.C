#define PR(a)   printf("a = %d\t",(int) (a));
#define PRINT(a) PR(a);putch('\n');
#define FUDGE(k)        k + 3.14
main()
{
	int x = 2;
	printf(" %d \n",x);
	PRINT( x * FUDGE(2));
}