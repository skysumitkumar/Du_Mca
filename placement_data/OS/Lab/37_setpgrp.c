#include<unistd.h>
#include<unistd.h>
#include<stdio.h>
#include <sys/wait.h>
int main() 
{
	int status;
	int pid=fork();
	if (pid==0) 
    {
	    printf("\nChild process pid : %d\n",getpid());
	    printf("Process group id using getpgrp() : %d\n",getpgrp());
		//here problem it print 0 in place of group ID
	    printf("Process group id after setpgrp() : %d\n",setpgrp());
	    printf("Process group id using getpgrp() after setpgrp() : %d\n",getpgrp());
	}
	else
    {
	    wait(NULL);
	    printf("\nParent process pid : %d\n",getpid());
	    printf("Process group id using getpgrp() : %d\n",getpgrp());
	}
}