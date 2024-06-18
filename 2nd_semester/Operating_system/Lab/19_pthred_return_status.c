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
    int *status = malloc(sizeof(int));
    *status = 123;
    return (void*)status;
}
int main()
{
    pthread_t t1,t2;
    int* status;
    int* status1;
    pthread_create(&t1,NULL,&inc,NULL);
    pthread_create(&t2,NULL,&inc,NULL);
    pthread_join(t1,(void **)&status);
    pthread_join(t2,(void **)&status1);
    printf("Thread 1 exit status: %d\n",*status);
    printf("Thread 1 exit status: %d\n",*status1);
    free(status);
    free(status1);
    return 0;
}