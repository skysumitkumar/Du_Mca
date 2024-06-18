#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<semaphore.h>
#define THREAD_NUM 4
sem_t semaphore;
void* routine(void* args)
{
    sem_wait(&semaphore);
    sleep(1);
    printf("Thread %d\n",*(int*)args);
    sem_post(&semaphore);
    free(args);
    return NULL;
}
int main(int argc,char *argv[])
{
    pthread_t th[THREAD_NUM];
    sem_init(&semaphore,0,4);
    for(int i=0;i<THREAD_NUM;i++)
    {
        int* a=malloc(sizeof(int));
        *a=i;
        if(pthread_create(&th[i],NULL,&routine,a)!=0)
        {
            printf("Failed to create thread");
        }
    }
    for(int i=0;i<THREAD_NUM;i++)
    {
        if(pthread_join(th[i],NULL)!=0)
        {
            printf("Failed to join thread");
        }
    }
    sem_destroy(&semaphore);
    return 0;
}