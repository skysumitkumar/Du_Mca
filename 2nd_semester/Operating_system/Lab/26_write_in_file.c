#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main() {
    // Define the file name and permissions
    const char *filename="hello.txt";
    // Read and write permissions for the owner
    int mode=S_IRUSR|S_IWUSR; 
    // Create the file using the open system call with O_CREAT flag
    int file_descriptor=open(filename,O_CREAT|O_WRONLY,mode);
    if(file_descriptor<0) 
    {
        printf("Error creating file");
        exit(EXIT_FAILURE);
    }
    // Define the content to be written to the file
    const char *content="Hello, World!\n";
    // Write the content to the file
    ssize_t bytes_written=write(file_descriptor,content,strlen(content));
    if(bytes_written<0) 
    {
        printf("Error writing to file");
        close(file_descriptor);
        exit(EXIT_FAILURE);
    }
    printf("Successfully wrote %zd bytes to the file '%s'\n",bytes_written,filename);
    // Close the file descriptor
    if(close(file_descriptor)<0) 
    {
        printf("Error closing file");
        exit(EXIT_FAILURE);
    }
    return 0;
}
