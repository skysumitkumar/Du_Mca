#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Before abourt()\n");
    //Terminate the program abnormally
    abort();
    //This line will not be executed
    printf("After abort\n");
    return 0;
}