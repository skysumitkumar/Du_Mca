#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define FIFO_NAME "myfifo"
#define BUFFER_SIZE 256
void writer() 
{
    int fd;
    char buffer[BUFFER_SIZE];
    // Open the FIFO for writing
    fd = open(FIFO_NAME, O_WRONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    // Write data to the FIFO
    strcpy(buffer,"This is the content of the file.\n");
    write(fd,buffer,strlen(buffer));
    // Close the FIFO
    close(fd);
}
void reader() 
{
    int fd;
    char buffer[BUFFER_SIZE];
    ssize_t num_bytes;
    // Open the FIFO for reading
    fd = open(FIFO_NAME, O_RDONLY);
    if(fd == -1) 
    {
        perror("open");
        exit(EXIT_FAILURE);
    }
    // Read data from the FIFO
    num_bytes=read(fd, buffer, BUFFER_SIZE);
    if (num_bytes == -1) 
    {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }
    // Null-terminate the string
    buffer[num_bytes]='\0';
    // Print the content of the file
    printf("File content:\n%s", buffer);
    // Close the FIFO
    close(fd);
}
int main() 
{
    // Create the FIFO if it does not exist
    if(mkfifo(FIFO_NAME,0666)==-1) 
    {
        perror("mkfifo");
        exit(EXIT_FAILURE);
    }
    pid_t pid=fork();
    if(pid==-1) 
    {
        perror("fork");
        exit(EXIT_FAILURE);
    } 
    else if(pid==0) 
    {
        // Child process: reader
        reader();
    } 
    else 
    {
        // Parent process: writer
        writer();
    }
    // Remove the FIFO
    unlink(FIFO_NAME);
    return 0;
}
