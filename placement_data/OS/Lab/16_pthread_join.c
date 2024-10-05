#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<wait.h>
//#include<cstdlib>
int count=0;
void* inc()
{
    printf("hello");
    for(int i=1;i<10000;i++)
    {
        printf("%d ",count);
        count++;
    }
}
void* sub()
{
    printf("hello");
    for(int i=1;i<10000;i++)
    {
        printf("%d ",count);
        count--;
    }
}

int main()
{
	// int *p=(int*)malloc(2);
	// int id=fork();
    pthread_t t1,t2;
    pthread_create(&t1,NULL,&inc,NULL);
    pthread_create(&t2,NULL,&sub,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("%d",count);
    return 0;
}

