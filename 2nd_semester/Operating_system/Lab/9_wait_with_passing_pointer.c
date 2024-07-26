#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	int *p=(int*)malloc(2);
	int id=fork();
	if(id>0)//parent
	{
	wait(p);//pid_t waitpid(int *stat_loc);
	//here it wait because id is >0
	printf("p terminated\n");
	//after waiting when it come here it print the exit status like 
	//if exit status is 1-:0000001  0000000
	//if exit status is 2-:0000010  0000000
	//if exit status is -1-: 255
	//if exit status is -1-: 254
	printf("Exit status %d\n",*p);
	printf("Exit status %d\n",*p/256);
	}
	else
	{
	printf("c finished\n");
	exit(-2);
	}
}
