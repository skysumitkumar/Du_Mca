main()
{
	char a= 'A';
	if( (a=='Z')||( (a='L')&&( a=='A')))
		a=a;
	printf("%c",a);
	printf(" Nothing ");
}