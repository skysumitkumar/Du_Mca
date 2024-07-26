#include<stdio.h>
main()
{
	FILE **fp;
	fp=fopen("temp","w");
	fprintf(fp,"abcd");
}