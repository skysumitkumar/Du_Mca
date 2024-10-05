#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int status;
	int pid = fork();
	if (pid == 0) 
    {
	    printf("\nChild process pid : %d\n",getpid());
        printf("Process group id using getpgrp() : %d\n",getpgrp());
		printf("Process group id after setpgrp() : %d\n",setpgrp());
        printf("Process group id after setpgid(0,0) : %d\n",setpgid(0,0));
        printf("Process group id using getpgrp() after setpgid(0,0) : %d\n",getpgrp());
	}
    else
    {
	    wait(NULL);
	}
}