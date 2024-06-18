#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<errno.h>
int main()
{
    int fd[2];
    if(pipe(fd)==-1)
    {
        printf("An error occurred with opening the pipe\n");
        return 1;
    }
    int id=fork();
    if(id==-1)
    {
        printf("An error ocurred with fork\n");
        return 2;
    }
    if(id==0)
    {
        //child process
        close(fd[0]);
        int data;
        printf("Input a no: ");
        scanf("%d",&data);
        write(fd[1],&data,sizeof(int));
        close(fd[1]);
    }
    else
    {
        //parent process 
        close(fd[1]);
        int buffer;
        read(fd[0],&buffer,sizeof(int))==-1;
        printf("Got from child process %d\n",buffer);
        printf("Result is %d\n",buffer);
        close(fd[0]);
    }
    return 0;
}