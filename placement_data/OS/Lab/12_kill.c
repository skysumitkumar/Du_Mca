#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
int main()
{
	int a=fork();
	if(a>0)
	{
		sleep(1);
		printf("This is parent\n");
		kill(a,SIGCONT);
		wait(NULL);
	}
	else
	{	kill(getpid(),SIGSTOP);
		printf("This is child");
	}
	return 0;
}