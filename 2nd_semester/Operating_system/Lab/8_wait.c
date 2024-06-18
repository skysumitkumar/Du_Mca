#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	int a=fork();
	if(a>0)
	{
	wait(NULL);
	printf("i am comming after waiting\n");
	}
	else
	{
	printf("i am child of a\n");
	}
}
