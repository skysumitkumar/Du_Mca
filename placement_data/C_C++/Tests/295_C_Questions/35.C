#include<stdio.H>
main()
{
	static char s[]="Hi Goodie";
	int i=4;
	char ch;
	ch=s[i++];printf("\t %c",ch);
	ch=++i[s];printf("\t %c",ch);
	ch=++i[s];printf("\t %c",ch);
	ch=i++[s];printf("\t %c",ch);
	ch=s[++i];printf("\t %c",ch);
    ch=i[s]++;printf("\t %c",ch);
}