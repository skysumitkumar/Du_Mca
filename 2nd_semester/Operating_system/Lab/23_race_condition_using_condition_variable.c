#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int count=0;
pthread_cond_t cond=PTHREAD_COND_INITIALIZER; // Initialize condition variable
pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER; // Initialize mutex
void* inc() 
{
    for(int i=1;i<10000;i++) {
        pthread_mutex_lock(&mutex);
        count++;
        pthread_cond_broadcast(&cond); // Signal waiting threads
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}
void* sub() 
{
    for(int i=1;i<10000;i++) {
        pthread_mutex_lock(&mutex);
        count--;
        pthread_cond_broadcast(&cond); // Signal waiting threads
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}
int main() 
{
    pthread_t t1,t2;
    pthread_create(&t1,NULL,inc,NULL);
    pthread_create(&t2,NULL,sub,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("%d\n", count);
    // Destroy the condition variable and mutex
    pthread_cond_destroy(&cond);
    pthread_mutex_destroy(&mutex);
    return 0;
}
