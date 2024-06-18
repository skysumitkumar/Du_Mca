#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#define MAXLINE 100
int main()
{
    int n;
    int fd[2];
    pid_t pid;
    char line[MAXLINE];
    if(pipe(fd)<0)
    printf("pipe error");
    pid=fork();
    if(pid>0)
    {
        close(fd[0]);
        write(fd[1],"hello world \n",12);
    }
    else{
        close(fd[1]);
        n=read(fd[0],line,MAXLINE);
        //To print how much reader read
        write(STDOUT_FILENO,line,n);
    }
    exit(0);
}