#include<stdio.h>
int f(int n);
int f(int n)
{
int i;
static int j=0;
for(i =1;i<=n;i++)
	f(n-i);
j++;
	return j;
}
main()
{
	int j=f(7);
	printf("j=%d",j);

}