#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    pid_t pid;
    int p[2];
    char c='?';
    if(pipe(p)!=0)
    {
        printf("pipe() error");
    }
    if((pid)=fork()==0)
    {
        printf("child process group id is %d\n",(int)getpgrp());
        write(p[1],&c,1);
        //it retrun group id
        printf("Now we make a new group that child has group leader %d\n",setsid());
        printf("child process group id is now %d\n",(int)getpgrp());
        exit(0);
    }
    else
    {
        printf("parent process group id is %d\n",(int)getpgrp());
        read(p[0],&c,1);
        sleep(5);
    }
}