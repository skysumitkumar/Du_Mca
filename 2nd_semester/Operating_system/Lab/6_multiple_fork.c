#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	//this fork make 1 child after calling of this fork control will go to the next line in main and child
	fork();
	//this fork make child of 2 parents
	fork();
	//this hello world print 4 times 
	printf("hello world\n");
	//this fork make child of 4 parents
	fork();
	printf("hello world hy\n");
}
