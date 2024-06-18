#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
void *fun1()
{
    pthread_t pid=pthread_self();
    pthread_exit((void*)pid);
}
void *fun2()
{
    pthread_t pid=pthread_self();
    pthread_exit((void*)pid);
}
int main()
{
    void *status;
    pthread_t t1,t2;
    int* exit_status1;
    int* exit_status2;
    pthread_create(&t1,NULL,&fun1,NULL);
    pthread_create(&t2,NULL,&fun2,NULL);
    pthread_join(t1,(void**)&exit_status1);
    pthread_join(t2,(void**)&exit_status2);
    printf("\nId of 1st thread %lu \n",(unsigned long)exit_status1);
    printf("\n Id of 2nd thread %lu \n",(unsigned long)exit_status1);
}