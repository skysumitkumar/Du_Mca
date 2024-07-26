#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<wait.h>
#include<semaphore.h>
int count=0;
//make a samaphore
sem_t s1;
void* inc()
{
    for(int i=1;i<10000;i++)
    {
        //decrement the value of samaphore
        sem_wait(&s1);
        count++;
        //increment the value of samaphore
        sem_post(&s1);
    }
}
void* sub()
{
    for(int i=1;i<10000;i++)
    {
        //decrement the value of samaphore
        sem_wait(&s1);
        count--;
        //increment the value of samaphore
        sem_post(&s1);
    }
}
int main()
{
    //initalize the samaphore
    //first:-samaphore second:-if theread-0 if process-1 third:-value of samaphore
    sem_init(&s1,0,1);
    pthread_t t1,t2;
    pthread_create(&t1,NULL,&inc,NULL);
    pthread_create(&t2,NULL,&sub,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    //distroy the samaphore
    sem_destroy(&s1);
    printf("%d",count);
    return 0;
}

