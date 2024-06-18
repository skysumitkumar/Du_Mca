#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("testbuf.txt", "wt");
	fwrite("1. This is fwrite\n",1, 18, fp);
	write(fileno(fp),  "2.This is write\n", 17);
	fclose(fp);
}