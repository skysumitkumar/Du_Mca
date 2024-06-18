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
        int cid=fork();
        if(cid==0)
        {
            printf("grandchild pid is : %d and process group id is: %d\n",getpid(),getpgrp());
            exit(0);
        }
        printf("child pid is: %d and process group id is: %d\n",getpid(),getpgrp());
        wait(&status);
        exit(0);
    }
    printf("parent pid is: %d and process group id is: %d\n",getpid(),getpgrp());
    printf("the parent's parent pid is: %d",getppid());
    wait(&status);
}