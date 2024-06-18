main()
{
	unsigned int k = 987 , i = 0;
	char trans[10];
	do
	{
		 trans[i++]  = (k%16 > 9) ? (k%16 - 10 + 'a') : (k%16 - '0' );
	} while(k /= 16);
	for(i=0;i<10;i++)
			printf("%d ", trans[i]);
}