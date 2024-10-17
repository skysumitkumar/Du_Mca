#include<stdio.H>
main(int argc ,char *argv[])
{
    int c;
	FILE *of;
	FILE *if;
	of=fopen(argv[2],"w");
	if=fopen(argv[1],"r");
	while(c=getc(if)!=EOF)
		putc(c,of);
	closeall()
}