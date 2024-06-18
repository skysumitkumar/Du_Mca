#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
pthread_rwlock_t reader1;
pthread_rwlock_t writer1;
int read_count=0;
int count=0;
void* writer()
{
    for(int i=0;i<10;i++)
    {
       pthread_rwlock_wrlock(&writer1);
       printf("Writer entered\n"); 
       count++;
       printf("Write content\n");
       sleep(1);
       pthread_rwlock_unlock(&writer1);
       printf("Writer exit\n");
    }
}
void* reader()
{
    for(int i=0;i<10;i++)
  {
    pthread_rwlock_wrlock(&reader1);
    read_count++;
    if(read_count==1)
    {
      pthread_rwlock_wrlock(&writer1);
    }
    pthread_rwlock_unlock(&reader1);
    printf("Reader entered\n");
    sleep(1);
    printf("Read content\n");
    pthread_rwlock_wrlock(&reader1);
    read_count--;
    if(read_count==0)
    {
      pthread_rwlock_unlock(&writer1);
    }
    pthread_rwlock_unlock(&reader1);   
    printf("Reader exit\n");
  }
  return NULL;
}
int main()
{
    pthread_t th[5];
  //Creating a 5 thread 2 reader 3 writer
    pthread_rwlock_init(&reader1,NULL);
    pthread_rwlock_init(&writer1,NULL);
    for(int i=0;i<5;i++)
    {
        if(i<=1)
        {
          pthread_create(&th[i],NULL,&writer,NULL);
        }
        else
        {
            pthread_create(&th[i],NULL,&reader,NULL);

        }
    }
    for (int i=0;i<5;i++)
    {
        pthread_join(th[i],NULL);
    }
    pthread_rwlock_destroy(&reader1);
    pthread_rwlock_destroy(&writer1);
}
