#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
// int main (){
//     int pid;
//     int status;

//     printf("Parent: %d\n", getpid());

//     pid = fork();
//     if (pid == 0){
//         printf("Child %d\n", getpid());
//         sleep(2);
//         exit(EXIT_SUCCESS);
//     }

// //Comment from here to...
//     //Parent waits process pid (child)
//     waitpid(pid, &status, 0);
//     //Option is 0 since I check it later

//     if (WIFSIGNALED(status)){
//         printf("Error\n");
//     }
//     else if (WEXITSTATUS(status)){
//         printf("Exited Normally\n");
//     }
// //To Here and see the difference
//     printf("Parent: %d\n", getpid());

//     return 0;
// }
int main()
{
    printf("here we start our waitpid process\n");
    int p=fork();
    int a=fork();
    int childid;
    int grandchild;
    int *t=(int*)malloc(2);
    if(a==0)
    {
        grandchild=getpid();
    }
    if(p==0)
    {
        childid=getpid();
    }
    if(p>0)
    {
        waitpid(childid,t,0);//pid_t waitpid(pid_t pid,int *stat_loc,int options);
        printf("I am comming after my chid is done\n");
    }
    else{
        printf("I am child\n");
    }
    if(p>0&&a>0)
    {
        printf("I am the parent");
    }
}