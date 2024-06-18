#include<stdio.h>
#define MAX 20
main()
{
	FILE *fp1, *fp2;
	char *this1, *this2;
	fp1 = fopen("ip1.dat","r");
	if(fp1==NULL)
		printf("file open error\n");
	fp2 = fopen("ip2.dat","r");
	if(fp2==NULL)
		printf("file open error\n");
	if((getline(this1,fp1)!=0) && (getline(this2,fp2)!=0))
	{
		if(strcmp(this1,this2))
			continue;
		else
		{
			printf("lines do not match\n");
			break;
		}
	}
}
int getline(char *line, FILE *fp)
{
		if(fgets(line,MAX, fp) == NULL)
			return 0;
		else
			return strlen(line);
}