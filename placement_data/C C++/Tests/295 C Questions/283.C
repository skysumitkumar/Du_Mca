#include<stdio.h>
main()
{
    int i=6,j=4;
	printf("NO\n");
	switch(i)
	{
		do
		{
			case 1: printf("yes\n");
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:	j--;
		 }while (j);
	}
}