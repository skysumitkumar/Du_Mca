main()
{
	char *pk;
	const char* p;
	const char c = 'a';
	char c1='b';
	p=&c1;
	pk = &c;
	printf("%c %c",*pk,*p);
}