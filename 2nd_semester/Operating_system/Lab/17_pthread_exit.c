#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int count=0;
void* inc()
{
    printf("hello\n");
    for(int i=1;i<10000;i++)
    {
        //printf("%d ",count);
        count++;
    }
    int* exit_value=(int*)malloc(sizeof(int));
    *exit_value=100; // Set the exit value
    pthread_exit(exit_value);
}
void* sub()
{
    printf("hello\n");
    for(int i=1;i<10000;i++)
    {
        //printf("%d ",count);
        count--;
    }
    // Exit with a value
    int* exit_value=(int*)malloc(sizeof(int));
    *exit_value = 200; // Set the exit value
    pthread_exit(exit_value);
}
int main()
{
    pthread_t t1,t2;
    int* exit_status1;
    int* exit_status2;
    pthread_create(&t1,NULL,&inc,NULL);
    pthread_create(&t2,NULL,&sub,NULL);
    pthread_join(t1,(void**)&exit_status1);
    pthread_join(t2,(void**)&exit_status2);
    printf("%d",count);
    // Print exit values
    printf("\nExit status of thread 1: %d\n",*exit_status1);
    printf("Exit status of thread 2: %d\n",*exit_status2);
    // Free memory allocated for exit values
    free(exit_status1);
    free(exit_status2);
    return 0;
}