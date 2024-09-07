#include<stdio.h>
void fun(int, int*);
main()
{
	int j,i;
	int * intptr;
	printf("enter an integer\n");
	scanf("%d",&i);
	intptr = &j;
	j = i;
	printf("i and j are %d %d \n",i,j);
	fun(j,intptr);
	printf("i is:%d",i);
	printf("\n j is:%d",j);
}
void fun(int k, int *iptr)
{
	k++;
	(*iptr)++;
}