#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main() 
{
    // Define the file name and permissions
    const char *filename="newfile.txt";
    // Read and write permissions for the owner
    mode_t mode=S_IRUSR|S_IWUSR;
    // Create the file using the creat system call
    int file_descriptor=creat(filename,mode);
    if(file_descriptor<0) 
    {
        printf("Error creating file");
        exit(EXIT_FAILURE);
    }
    printf("File '%s' created successfully with file descriptor %d\n",filename,file_descriptor);
    // Close the file descriptor
    if(close(file_descriptor)<0) 
    {
        perror("Error closing file");
        exit(EXIT_FAILURE);
    }
    return 0;
}
