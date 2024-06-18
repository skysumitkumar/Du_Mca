main()
{
	int i=0;
	char s[]={"qwer\1\2\3"},c;
	while((c=s[i++])!='\0')
	{
		switch(c)
		{
			case 1 : printf("in 1");
					break;
			case 2 : printf("in 2");
					break;
            case 3 : printf("in 3");
					break;
			default : printf("in default ");
			}
	}
}
