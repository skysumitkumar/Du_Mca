#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
pthread_mutex_t reader;
pthread_mutex_t writer;
int read_count=0;
int count=0;
void *wr()
{
  for(int i=0;i<10;i++)
  {
    pthread_mutex_lock(&writer);
    printf("Writer entered\n");
    count++;
    printf("Write content\n");
    sleep(1);
    pthread_mutex_unlock(&writer);
    printf("Writer exit\n");
  }
  return NULL;
}
void *re()
{
  for(int i=0;i<10;i++)
  {
    pthread_mutex_lock(&reader);
    read_count++;
    if(read_count==1)
    {
      pthread_mutex_lock(&writer);
    }
    pthread_mutex_unlock(&reader);
    printf("Reader entered\n");
    sleep(1);
    printf("Read content\n");
    pthread_mutex_lock(&reader);
    read_count--;
    if(read_count==0)
    {
      pthread_mutex_unlock(&writer);
    }
    pthread_mutex_unlock(&reader);   
    printf("Reader exit\n");
  }
  return NULL;
}
int main()
{
  pthread_t th[5];
  // Creating a 5 thread 3 reader 2 writer
  pthread_mutex_init(&reader, NULL);
  pthread_mutex_init(&writer,NULL);
  for(int i=0;i<5;i++)
  {
    if(i<=1)
    {
      pthread_create(&th[i],NULL,&wr,NULL);
    }
    else
    {
      pthread_create(&th[i],NULL,&re,NULL);
    }
  }
  for (int i=0;i<5;i++)
  {
    pthread_join(th[i],NULL);
  }
  pthread_mutex_destroy(&reader);
  pthread_mutex_destroy(&writer);
}
