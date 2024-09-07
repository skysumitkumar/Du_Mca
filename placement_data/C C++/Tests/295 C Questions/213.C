main()
{
	unsigned int m[] = { 0x01,0x02, 0x04, 0x08,0x10, 0x20, 0x40, 0x80};
	unsigned int n,i;
	scanf("%d",&n);
	for(i=0;i<=7;i++)
	{
			if (n& m[i])
				printf("\nyes");
			else
				printf("\nno");
	}
}