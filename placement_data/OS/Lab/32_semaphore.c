#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<semaphore.h>
sem_t s;
void* child(void *arg)
{
    printf("Child\n");
    sem_post(&s);
    return NULL;
}
int main(int argc,char *argv[])
{
    sem_init(&s,0,0);
    printf("parent: begin\n");
    pthread_t c;
    pthread_create(&c,NULL,child,NULL);
    sem_wait(&s);
    printf("parent: end\n");
    sem_destroy(&s);
    return 0;
}