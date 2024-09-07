#include<stdio.H>
#define DEF
#define YES
#define NO
main()
{
int j;
#ifdef DEF
	j=YES;
#else
	j=NO;
#endif
printf("j=%d",j);
}