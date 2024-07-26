funct(char* str)
{
    printf("%s\n",str);
}
main()
{
	static int ii = 1;
	int jj = 5;
	ii+=++jj;
	funct(ii+++"Campus Interview");
}