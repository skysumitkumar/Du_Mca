#include<stdio.h>
main()
{
	auto int i = 0;
	printf("%d\n",i);
	{
	int i = 2;
	printf("%d\n",i);
	{
		i+=1;
		printf("%d\n",i);
	}
	printf("%d\n",i);
	}
	printf("%d\n",i);
	printf("%d\n",reset());
	printf("%d\n",ret10());
	printf("%d\n",reset());
	printf("%d\n",ret10());
 }
 int reset()
 {
	int j = 0;
	return(j);
}
int ret10()
{
	static int i = 10;
	i+=1;
	return(i);
}