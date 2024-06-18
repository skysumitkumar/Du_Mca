int a[50000];
main()
{
	int a = 0xff;
	if( (a<<4) >>12)
		printf("Right");
	else
		printf("Wrong");
}