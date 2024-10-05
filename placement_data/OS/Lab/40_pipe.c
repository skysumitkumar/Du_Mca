#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int fd[2];
    if(pipe(fd)==-1)
    {
        printf("An error ocurred with opening the pipe\n");
        return 1;
    }
    int id=fork();
    //child process
    if(id==0)
    {
        close(fd[0]);
        int data;
        printf("Input a no: ");
        scanf("%d",&data);
        write(fd[1],&data,sizeof(int));
        close(fd[1]);
    }
    //parent process
    else
    {
        close(fd[1]);
        int buffer;
        read(fd[0],&buffer,sizeof(int))==-1;
        printf("Got from child process %d\n",buffer);
        printf("Result is %d\n",buffer);
        close(fd[0]);
    }
    return 0;
}