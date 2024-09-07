main()
{
	int i=1;
	int j=i+2*i++;
	printf("i is %d \n",j);
	i=1;
	printf("i is %d \n",i+2+i++);
}