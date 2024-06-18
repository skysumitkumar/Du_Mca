#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int status;
    int pid=fork();
    if(pid==0)
    {
        printf("child process pid: %d\n",getpid());
        printf("process group id using getpgrp: %d\n",getpgrp());
        printf("process group id using getpgid(0): %d\n",getpgid(0));
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("parent process pid: %d\n",getpid());   
        printf("process group id using getpgrp(): %d\n",getpgrp()); 
        printf("process group id using getpgid(0): %d\n",getpgid(0));
    }
    return 0;
}