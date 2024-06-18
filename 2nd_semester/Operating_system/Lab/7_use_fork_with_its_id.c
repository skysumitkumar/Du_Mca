#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int a=fork();
	int b=fork();
	if(a>0&&b>0)
	{
	printf("this is parent first node\n");
	}
	else if(a>0&&b==0)
	{
	printf("this is child of a and second node\n");
	}
	else if(b>0&&a==0)
	{
	printf("This is child of b and third node\n");
	}
	else if(a==0&&b==0)
	{
	printf("This is child of b and forth node\n");
	}
}
