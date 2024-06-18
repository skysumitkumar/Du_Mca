void f(int j);
main()
{
	int i=4;
	if (i>5)
		printf("Hi");
	else
		f(i);
}
void f(int j)
{
	if (j>=4)
		f(j-1);
	else
		if(j==0)
			return;
	printf("Hi");
}