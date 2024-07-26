//Anuj Jain
//Roll no-4

#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;
int main()
{
while(true)
{
char input[50][50];
char c;
int flag=1;
int i=0,j=0;
char path[30];
getcwd(path,30);
cout<<"\n[anuj@localhost "<<path<<"]#";
/******Taking and tokenising the input***************/ 

while((c=getchar())!='\n')
{
	if(c==' ')
	{
		if(flag!=1)
		{
		   input[i][j]='\0';
		   i++;
		   j=0;
		   flag=1;
		}
	}
	else
	{
		input[i][j]=c;
		j++;
		flag=0;
	}
}
input[i][j]='\0';

/***********For exit****************************/
if(strcmp(input[0],"exit")==0)
	exit(0);

/***********For no input************************/
if(input[0][0]=='\0')
	continue;
/***********Making array of pointers************/
char *tokens[50];
int k=0;
while(k<=i)
{
	tokens[k]=input[k];
	k++;
}
tokens[k]='\0';
/***********For changing directry****************/
if(strcmp(input[0],"cd")==0)
{
	chdir(tokens[1]);
	continue;
}

int pid=fork();
if(pid==0)
{
	
	execvp(input[0],tokens);
	cout<<"\nInvalid command";
	return 0;
	
}
else
wait(pid);
}
return 0;
}


