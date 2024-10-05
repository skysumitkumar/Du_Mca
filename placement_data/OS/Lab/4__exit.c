#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    printf("hello i start the program \n");//remember about putting \n
    _exit(2);
    printf("This is our last statement of the program \n");
}