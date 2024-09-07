main()
{
	char as[] = "\\0\0";
	int i = 0;
	char ch='a';
	do
	{
		switch( as[i++])
		{
			case '\\' : printf("A");
						break;
			case 0   :  printf("B");
						break;
			default : 	printf("C");
						break;
		}
	 } while(i<3);
	 printf("%d\n",'a');
	 switch(ch)
	 {
		case 97 :   putch('a');
					break;
		case 98 :   putch('b');
					break;
	  }
}