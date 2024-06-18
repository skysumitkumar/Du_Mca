#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main() 
{
    pid_t pid=fork();
    if(pid>0) 
    {
        wait(NULL);
        printf("\nhere parent lies\n");
    } 
    else 
    {
        // Child process
        //remember here give the executable file location
        execl("/media/sumit/New Volume/Study/Du_mca/2nd_semester/Operating_system/Lab/1_getpid","1_getpid.c",NULL);
        // If execl() fails
        printf("\nexecl");
        return 1;
    }
    return 0;
}
