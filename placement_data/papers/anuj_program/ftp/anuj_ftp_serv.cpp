/*
		ANUJ JAIN
		ROLL NO-4
   **** FTP Server ****
*/

#include<sys/socket.h>
#include<fstream>
#include<sys/types.h>
#include<netinet/in.h>
#include<iostream>
#include<fcntl.h>
#include<sys/stat.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/wait.h>
#include<dirent.h>
using namespace std;

#define SA struct sockaddr
#define SERV_PORT 9877
#ifndef HAVE_BZERO
#define bzero(ptr,n) memset(ptr,0,n)
#endif
#define LISTENQ 1024

enum msg_type{AM,REQ,REP};
enum command{GET,PUT,ls,cd,logout,error,ok,yes,no};

struct message
{
msg_type type;
command cmd;
char filename[100];
char buff[1024];
int flag;
};

int authenticate_id(int newfd);
int authenticate_pwd(int newfd);
void get_req(int newfd);
void put_req(int newfd);
void ls_req(int newfd);
void cd_req(int newfd);
void logout_req(int newfd);
void invalid_cmd(int newfd);

const char* uid="anuj";
const char* pwd="jain";

message msgin,msgout;

int main(int argc,char** argv)
{

int listenfd,newfd;

pid_t childpid;
socklen_t clilen;
struct sockaddr_in cliaddr,servaddr;
listenfd=socket(AF_INET,SOCK_STREAM,0);
bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
servaddr.sin_port=htons(SERV_PORT);

bind(listenfd,(SA *)&servaddr,sizeof(servaddr));
listen(listenfd,LISTENQ);

clilen=sizeof(cliaddr);

do
{
newfd=accept(listenfd,(SA *)&cliaddr,&clilen);

childpid=fork();

if(childpid==-1)
{
	cout<<"\n\n\tCould not create a child";
	return 0;
}
else 
if(childpid==0)
	{/* this is the child part*/
	close(listenfd);
	while(authenticate_id(newfd)==0);
	while(authenticate_pwd(newfd)==0);
	do
	{
	read(newfd,(char *)&msgin,sizeof(msgin));
	switch(msgin.cmd)
	{
	case GET:get_req(newfd);
		 break;
	case PUT:put_req(newfd);
		 break;
	case ls:ls_req(newfd);
		break;
	case cd:cd_req(newfd);
		 break;
	case logout:logout_req(newfd);
		    break;
	}//switch case ends here
	}
	while(msgin.cmd!=logout);
	close(newfd);
	return 0;
	}//child part ends here
else
	close(newfd);
}
while(true);
return 0;
}


int authenticate_id(int newfd)
{

/*********Reading authentication request message(user name)********/
read(newfd,(char *)&msgin,sizeof(msgin));
msgout.type=AM;

if(strcmp(msgin.filename,uid)!=0)
{
cout<<"sry invalid user";
msgout.flag=0;
}

else
{
cout<<"valid user";
msgout.flag=1;
}
/********Sending authentication reply message***********/
write(newfd,(char *)&msgout,sizeof(msgout));
return msgout.flag;

}

int authenticate_pwd(int newfd)
{
/*********Reading authentication request message(password)********/

read(newfd,(char *)&msgin,sizeof(msgin));
msgout.type=AM;
if(strcmp(msgin.filename,pwd)!=0)
{
cout<<"invalid user";
msgout.flag=0;
}
else
{
cout<<"valid user";
msgout.flag=1;
}
/********Sending authentication reply message***********/

write(newfd,(char *)&msgout,sizeof(msgout));
return msgout.flag;
}


void get_req(int newfd)
{


msgout.type=REP;
int fd=open(msgin.filename,O_RDONLY);
if (fd==-1)
{
/**********If file not present*************/
msgout.cmd=error;
cout<<"\n Error";
write(newfd,(char *)&msgout,sizeof(msgout));
return;
}
else
msgout.cmd=ok;

int count;

do
{
/******Reading from the file**************/
count=read(fd,(char *)&(msgout.buff),sizeof(msgout.buff));
msgout.flag=count;

/******Writing on the socket**************/
write(newfd,(char *)&msgout,sizeof(msgout));
}
while(count!=0);

}


void put_req(int newfd)
{
msgout.type=REP;

int fd=open(msgin.filename,O_RDONLY);

/***if file already exists***/

if (fd!=-1)
{
msgout.cmd=error;
write(newfd,(char *)&msgout,sizeof(msgout));
read(newfd,(char *)&msgin,sizeof(msgin));
if(msgin.cmd==no)
return;
}
else
{
msgout.cmd=ok;
/******Response for correct file**************/

write(newfd,(char *)&msgout,sizeof(msgout));
/******Reading the message from client**************/

read(newfd,(char *)&msgin,sizeof(msgin));
}
close(fd);


fd=open(msgin.filename,O_CREAT|O_WRONLY|O_TRUNC);
if(fd==-1)
{
	cout<<"file cannot be opened";
	return 0;
}
int count;

do
{
/******Reading from the socket**************/

read(newfd,(char *)&msgin,sizeof(msgin));

/******writing on the local file**************/

write(fd,(char *)&msgin.buff,msgin.flag);
}
while(msgin.flag>0);

}


/********Function to handle the logout request*************/


void logout_req(int newfd)
{
	
	close(newfd);
	cout<<"connection successfully closed";

	
}

/******Implementing the 'ls' command*************/
void ls_req(int newfd)
{
/*********Generating the directory listing and sending it back to the client***/
int i=0;
DIR* curr=opendir(msgin.filename);
dirent* obj;
msgout.type=REP;
msgout.flag=0;

while(obj=readdir(curr))
{

if((obj->d_name[0])!='.')
	{
	i=0;
	do
	{
	msgout.filename[i]=obj->d_name[i];
	i++;
	}
	while(obj->d_name[i]!='\0');
	msgout.filename[i]='\t';
	msgout.filename[++i]='\0';
	/******writing on the socket******/
	write(newfd,(char *)&msgout,sizeof(msgout));
	}	
}
msgout.flag=1;
msgout.filename[0]='\0';
write(newfd,(char *)&msgout,sizeof(msgout));

closedir(curr);
}

/********Function used to change the current working directory of the server******/
void cd_req(int newfd)
{
int var=chdir(msgin.filename);
//if(var==0)
}


