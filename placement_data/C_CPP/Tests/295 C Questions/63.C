#include<stdio.h>
main()
{
	static int i=0;
	if(i<=3)
		printf("\nBull's Eye");
	else
	{
		main();
		exit();
	}
	i++;
}