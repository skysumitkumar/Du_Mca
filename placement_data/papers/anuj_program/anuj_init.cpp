//Anuj Jain
//Roll number 4
//Program to simulate the init program of unix

#include<fstream>
#include<iostream>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<string.h>
using namespace std;
//format of structure of inittab file
struct record
{
char filename[100];
int flag;
}r;

int main(int argc,char** argv)
{
cout<<"\n\n\tplease enter mode ";
int mode;
cin>>mode;

int fd1=open("inittab",O_RDONLY);
int count,i=0;
//reading inittab file and executing the processes of the same mode as of the system
count=read(fd1,(char *)&r,sizeof(r));
while(count)
{
	i=0;
	if(r.flag!=mode)
	{
		count=read(fd1,(char *)&r,sizeof(r));
		continue;
	}
	else
	{
		char* argv[10];
	//	argv[i]=r.filename;
		argv[i]=strtok(r.filename," ");
		while((argv[i]!=NULL)&&(i<9))
		{
			i++;
			argv[i]=strtok(NULL," ");
		}
	

		int pid=fork();
		if(pid==0)
			execvp(argv[0],argv);
		else
			wait(0);

	}
count=read(fd1,(char *)&r,sizeof(r));

}
close(fd1);
return 0;
}

