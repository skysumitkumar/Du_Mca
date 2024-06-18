#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int count=0;
pthread_rwlock_t rwlock=PTHREAD_RWLOCK_INITIALIZER;
void* inc() 
{
    for(int i=1;i<10000;i++) 
    {
        pthread_rwlock_wrlock(&rwlock);
        count++;
        pthread_rwlock_unlock(&rwlock);
    }
    return NULL;
}
void* sub()
{
    for(int i=1;i<10000;i++) 
    {
        pthread_rwlock_wrlock(&rwlock);
        count--;
        pthread_rwlock_unlock(&rwlock);
    }
    return NULL;
}
int main() 
{
    pthread_t t1,t2;
    pthread_rwlock_init(&rwlock,NULL);
    pthread_create(&t1,NULL,inc,NULL);
    pthread_create(&t2,NULL,sub,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_rwlock_destroy(&rwlock);
    printf("%d\n",count);
    return 0;
}
