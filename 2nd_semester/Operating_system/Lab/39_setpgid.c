#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    pid_t pid;
    int p1[2],p2[2];
    char c='?';
    if(pipe(p1)!=0)
    {
        printf("pipe() #1 error");
    }
    else if(pipe(p2)!=0)
    {
        printf("pipe() #2 error");
    }
    else if((pid=fork())==0)
    {
        printf("child process group id %d\n",(int)getpgrp());
        write(p2[1],&c,1);
        printf("child is waiting for parent to complete task\n");
        read(p1[0],&c,1);
        printf("child process group id is now %d\n",(int)getpgrp());
        exit(0);
    }
    else
    {
        printf("parent process group id is %d\n",(int)getpgrp());
        read(p2[0],&c,1);
        printf("parent is performing setpgid() on pid %d\n",(int)pid);
        //pid,processgrp id
        if(setpgid(pid,0)!=0)
        {
            printf("setpgid() error");
        }
        write(p1[1],&c,1);
        printf("parent process group id is now %d\n",(int)getpgrp());
        sleep(5);
    }
}