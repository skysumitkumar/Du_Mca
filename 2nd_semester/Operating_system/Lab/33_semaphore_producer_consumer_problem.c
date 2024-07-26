#include<pthread.h>
#include<semaphore.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define BUFFER_SIZE 10
int buffer[BUFFER_SIZE];
int in=0;  // Index for the next write by the producer
int out=0; // Index for the next read by the consumer
sem_t empty; // Semaphore to count empty slots in the buffer
sem_t full;  // Semaphore to count full slots in the buffer
pthread_mutex_t mutex; // Mutex to protect buffer access
void *producer(void *arg) 
{
    int item;
    while(1) 
    {
        item=rand()%100; // Produce an item
        sem_wait(&empty); // Wait for an empty slot
        pthread_mutex_lock(&mutex); // Lock the buffer
        // Critical section: add the item to the buffer
        buffer[in]=item;
        printf("Producer produced %d\n",item);
        in=(in+1)%BUFFER_SIZE;
        pthread_mutex_unlock(&mutex); // Unlock the buffer
        sem_post(&full); // Signal that a new item has been added
        sleep(1); // Simulate time taken to produce an item
    }
}
void *consumer(void *arg) 
{
    int item;
    while(1) 
    {
        sem_wait(&full); // Wait for a full slot
        pthread_mutex_lock(&mutex); // Lock the buffer
        // Critical section: remove the item from the buffer
        item=buffer[out];
        printf("Consumer consumed %d\n",item);
        out=(out+1)%BUFFER_SIZE;  
        pthread_mutex_unlock(&mutex); // Unlock the buffer
        sem_post(&empty); // Signal that a slot has been emptied
        sleep(1); // Simulate time taken to consume an item
    }
}
int main() {
    pthread_t prod_tid,cons_tid;
    // Initialize the semaphores
    sem_init(&empty,0,BUFFER_SIZE); // All buffer slots are initially empty
    sem_init(&full,0,0); // No slots are initially full
    pthread_mutex_init(&mutex,NULL); // Initialize the mutex
    // Create the producer and consumer threads
    pthread_create(&prod_tid,NULL,producer,NULL);
    pthread_create(&cons_tid,NULL,consumer,NULL);
    // Join the threads (this program will run indefinitely)
    pthread_join(prod_tid,NULL);
    pthread_join(cons_tid,NULL);
    // Destroy the semaphores and mutex
    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);
    return 0;
}
