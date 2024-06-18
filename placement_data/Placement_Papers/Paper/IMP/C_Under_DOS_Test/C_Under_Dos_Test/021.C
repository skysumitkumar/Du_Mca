#include<stdio.h>
void main()
{
	FILE *fp;
	unsigned char i;
	clrscr();
	fp=fopen("017.c","r");
	while( (i=fgetc(fp)) !=
	  EOF)
	printf("%c",i);
	getch();
}