#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void* thread_function(void* arg) {
    printf("Thread with custom attributes is running...\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_attr_t attr;
    size_t stack_size = 2 * 1024 * 1024; // 2 MB

    // Initialize thread attribute
    if (pthread_attr_init(&attr) != 0) {
        perror("pthread_attr_init");
        return 1;
    }

    // Set custom stack size
    if (pthread_attr_setstacksize(&attr, stack_size) != 0) {
        perror("pthread_attr_setstacksize");
        return 1;
    }

    // Create thread with the custom attributes
    if (pthread_create(&thread, &attr, thread_function, NULL) != 0) {
        perror("pthread_create");
        pthread_attr_destroy(&attr);
        return 1;
    }

    // Wait for the thread to complete
    if (pthread_join(thread, NULL) != 0) {
        perror("pthread_join");
        pthread_attr_destroy(&attr);
        return 1;
    }

    // Clean up the attribute object
    if (pthread_attr_destroy(&attr) != 0) {
        perror("pthread_attr_destroy");
        return 1;
    }

    printf("Thread has completed execution.\n");

    return 0;
}