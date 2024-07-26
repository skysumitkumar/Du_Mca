fun()
{
	printf("Yes\n");
 }
#define fun()  printf("No\n")
main()
{
	fun();
	(fun)();
}