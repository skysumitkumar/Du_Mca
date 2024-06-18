#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	//this fork make 1 child after calling of this fork control will go to the next line in main and child
	fork();
	//this fork make 1 more child after calling of this fork control will go to the next line in main and child
	fork();
	printf("hello world\n");//4times 
}
