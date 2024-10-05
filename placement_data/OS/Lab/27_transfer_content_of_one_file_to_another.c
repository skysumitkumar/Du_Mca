#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define BUFFER_SIZE 1024
int main() 
{
    // Define the source and destination file names
    const char *source_filename="source.txt";
    const char *destination_filename="destination.txt";
    // Open the source file for reading
    int source_fd=open(source_filename,O_RDONLY);
    if(source_fd<0) 
    {
        printf("Error opening source file");
        exit(EXIT_FAILURE);
    }
    // Open the destination file for writing (create if it does not exist)
    int destination_fd=open(destination_filename,O_CREAT|O_WRONLY|O_TRUNC,S_IRUSR|S_IWUSR);
    if(destination_fd<0) 
    {
        printf("Error opening destination file");
        close(source_fd);
        exit(EXIT_FAILURE);
    }
    // Buffer to hold data during transfer
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read,bytes_written;
    // Transfer the content from the source file to the destination file
    while((bytes_read=read(source_fd,buffer,BUFFER_SIZE))>0) 
    {
        bytes_written=write(destination_fd,buffer,bytes_read);
        if(bytes_written!=bytes_read) 
        {
            printf("Error writing to destination file");
            close(source_fd);
            close(destination_fd);
            exit(EXIT_FAILURE);
        }
    }
    if (bytes_read < 0) {
        printf("Error reading from source file");
    }
    // Close both file descriptors
    if(close(source_fd)<0) 
    {
        printf("Error closing source file");
        exit(EXIT_FAILURE);
    }
    if(close(destination_fd)<0) 
    {
        printf("Error closing destination file");
        exit(EXIT_FAILURE);
    }
    printf("Content transferred from '%s' to '%s' successfully\n",source_filename,destination_filename);
    return 0;
}
