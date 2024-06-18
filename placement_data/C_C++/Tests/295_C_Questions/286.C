#include<stdio.h>
main()
{
	char s[] = "Bouquets and Brickbats";
	printf("\n%c ",*(&s[2]));
	printf("%s, ",s+5);
	printf("\n%s",s);
	printf("\n%c",*(s+2));
}