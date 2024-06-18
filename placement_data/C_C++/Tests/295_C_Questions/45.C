#include<stdio.h>
main()
{
	FILE *fp;
	char a;
	fp=fopen("old.out","w");
	if(fp==0)
		printf("File opening error");
	else
	{
		for(scanf("%c",&a);a!=EOF;scanf("%c",&a))
		fprintf(fp,"%c",a);
		fclose(fp);
		fp=fopen("old.out","r");
		while(!feof(fp))
			putchar(getc(fp));
		}
}