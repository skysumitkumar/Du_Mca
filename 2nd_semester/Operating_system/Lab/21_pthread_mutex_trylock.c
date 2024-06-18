#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
int count=0;
pthread_mutex_t mute;
void* inc()
{
    for(int i=1;i<10000;i++)
    {
        pthread_mutex_lock(&mute);
        pthread_mutex_trylock(&mute);//if lock is not here or we remove lock previously so here we give trylock it try to lock if lock is not present it lock otherwise ignore 
        count++;
        pthread_mutex_unlock(&mute);
    }
}
void* sub()
{
    for(int i=1;i<10000;i++)
    {
        pthread_mutex_lock(&mute);
        pthread_mutex_trylock(&mute);
        count--;
        pthread_mutex_unlock(&mute);
    }
}
int main()
{
    pthread_mutex_init(&mute,NULL);
    pthread_t t1,t2;
    pthread_create(&t1,NULL,&inc,NULL);
    pthread_create(&t2,NULL,&sub,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_mutex_destroy(&mute);
    printf("%d",count);
    return 0;
}

