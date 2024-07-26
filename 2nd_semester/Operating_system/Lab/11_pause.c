#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<signal.h>
void signal_handler(int sig)
{

}
int main()
{
    signal(SIGCONT,signal_handler);
    int a=fork();
    if(a>0)
    {
        sleep(1);
        printf("parent process\n");
        kill(a,SIGCONT);
    }
    else{
        pause();//int pause(void);
        printf("child process\n");
    }
}