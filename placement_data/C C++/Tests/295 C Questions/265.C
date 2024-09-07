main()
{
	char input[] = "SSSWILTECH1\1\1";
	int i, c;
	for ( i=2; (c=input[i])!='\0'; i++)
	{
		switch(c)
		{
			case 'a': putch('i');
						continue;
			case '1': break;
			case 1: while (( c = input[++i]) != '\1' && c!= '\0');
			case 9: putch('S');
			case 'E':
			case 'L': continue;
			default: putch(c);
			continue;
		 }
		putch(' ');
	 }
	 putch('\n');
 }