#include<stdio.h>
#include<string.h>
main()
{
	char ch,c[12]="hello";
    char ch2[12];
	int i;
	for(i=0;i<4;i++)
	{
       ch2[i]=c[i];
	}
	printf("\n%c",ch2[3]);
	ch=puts("manish");
	printf("\n%d",ch);
}