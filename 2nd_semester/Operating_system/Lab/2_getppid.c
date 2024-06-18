// #include <errno.h>
// #include <stdlib.h>
// #include <stdio.h>
// #include <sys/ipc.h>
// #include <string.h>
// #include <sys/sem.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// #include <sys/wait.h>
// #include <unistd.h>

// void child1()
// {
//     //printf("we are child1..\n");
//     printf("my pid is:%d\n",getpid());
//     printf("I am child1..\n");
// }

// void child2()
// {
//     //printf("we are child2..\n");
//     printf("my pid is:%d\n",getpid());
//     printf("I am child2.., my parent is:%d\n",getppid());
// }

// int main()
// {
//     pid_t childpid[4];
//     int i;
//     printf("main pid is:%d\n",getpid());
//     for (i=0;i<2;i++)
//     {
//         childpid[i] = fork();
//         if (childpid[i]<0)
//             printf("fork fail..\n");
//         else if (childpid[i]==0)
//         {
//             childpid[i+2] = fork();
//             if (childpid[i+2] <0)
//                 printf("fork inside fail..\n");
//             else if (childpid[i+2]==0)
//                 child2();
//             else // this is parent process..
//                 child1();   
//         }
//     }
// }
#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("hello my pid is %d\n",getpid());
    printf("hello my ppid is %d\n",getppid());
    printf("hello my ppid is %d\n",getppid());
    return 0;
}