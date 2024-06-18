// #include<stdio.h>
// #include<unistd.h>
// #include<signal.h>
// #include<stdlib.h>
// #include<sys/wait.h>
// int main()
// {
//     int *p=(int*)malloc(2);
//     int id=fork();
//     if(id>0)
//     {
//         kill(id,SIGKILL);
//         int status;
//         wait(&status);
//         printf("Parent hase been called\n");
//     }
//     else{
//         sleep(5);
//         printf("child process\n");//if you cant write \n than it cant print this line
//         kill(id,SIGKILL);
//         exit(3);
//     }
//     printf("p's value is %d\n",*p/256);
//     free(p);
//     return 0;
// }
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(2);
    int id=fork();
    if(id>0)
    {
        sleep(10);
        printf("Parent hase been called");
        printf("yes no");
    }
    else{
        sleep(5);
        printf("value of %d\n",id);
        printf("child process\n");//if you cant write \n than it cant print this line
        kill(id,SIGKILL);
        exit(3);
    }
}