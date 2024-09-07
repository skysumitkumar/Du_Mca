/*
		ANUJ JAIN
		ROLL NO-4
   **** FTP Client ****
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

message msgin,msgout;

int authen_id(int sockfd);
int authen_pwd(int sockfd);
void get_req(int sockfd);
void put_req(int sockfd);
void ls_req(int  sockfd);
void cd_req(int sockfd);
void logout_req(int sockfd);

int main(int argc,char** argv)
{
int sockfd;

struct sockaddr_in servaddr;

sockfd=socket(AF_INET,SOCK_STREAM,0);

bzero(&servaddr,sizeof(servaddr));
servaddr.sin_family=AF_INET;
servaddr.sin_port=htons(SERV_PORT);
inet_pton(AF_INET,argv[1],&servaddr.sin_addr);
connect(sockfd,(SA *)&servaddr,sizeof(servaddr));

cout<<"\n\n\tyou are now connected to server";

while(authen_id(sockfd)==0);
while(authen_pwd(sockfd)==0);

cout<<"\nUser logged in successfully\n";
int choice;
do
{
cout<<"\n\t\t********";
cout<<"\n\t\tThe Menu";
cout<<"\n\t\t********";
cout<<"\n\n\t1)Get a remote file from the server";
cout<<"\n\t2)Put a local file to the server File";
cout<<"\n\t3)list the contents of the directory of the server";
cout<<"\n\t4)change the current working directory of the server";
cout<<"\n\t5)logout from the server";
cout<<"\n\t\tEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:get_req(sockfd);
       break;
case 2:put_req(sockfd);
       break;
case 3:ls_req(sockfd);
       break;
case 4:cd_req(sockfd);
       break;
case 5:logout_req(sockfd);
       break; 
default:cout<<"\nInvalid command";
}
}
while(choice !=5);
close(sockfd);
return 0;
}


int authen_id(int sockfd)
{

/********Sending authentication request(user id)*********/
cout<<"\n Enter user id:";
cin>>msgout.filename;
msgout.type=AM;
write(sockfd,(char*)&msgout,sizeof(msgout));
/********Reading reply message***********/
read(sockfd,(char *)&msgin,sizeof(msgin));
return msgin.flag;

}

int authen_pwd(int sockfd)
{
/********Sending authentication request(pwd)*********/

cout<<"\n Enter password:";
cin>>msgout.filename;
write(sockfd,(char*)&msgout,sizeof(msgout));

/********Reading reply message***********/

read(sockfd,(char *)&msgin,sizeof(msgin));
return msgin.flag;
}


void get_req(int sockfd)
{

char new_file[100];

cout<<"\n Enter Filename : ";
cin>>msgout.filename;

cout<<"\n Enter destination path :";
cin>>new_file;

int fd=open(new_file,O_CREAT|O_WRONLY|O_TRUNC);

msgout.type=REQ;
msgout.cmd=GET;
/**********Sending the get request********/
write(sockfd,(char *)&msgout,sizeof(msgout));
	
do
{
/******Reading file from the socket******/
read(sockfd,(char *)&msgin,sizeof(msgin));
if(msgin.cmd==error)
break;
/******wrting file to the local machine****/
write(fd,(char *)&msgin.buff,msgin.flag);
cout<<msgin.buff;
}
while(msgin.flag>0);

close(fd);
}


/*****Putting file on the server*********/

void put_req(int sockfd)
{

msgout.type=REQ;
msgout.cmd=PUT;
char overwrite;
char local_file[100];
cout<<"\n Enter local filename: ";
cin>>local_file;
cout<<"\n Enter  destination pathname:";
cin>>msgout.filename;


int fd=open(local_file,O_RDONLY);
int count;

if (fd==-1)
{
cout<<"\n Error opening file";
return;
}
/**********Sending the put request********/

write(sockfd,(char *)&msgout,sizeof(msgout));
/**********Reading the server's response***/
read(sockfd,(char *)&msgin,sizeof(msgin));

if(msgin.cmd==error)
{
cout<<"\n File already exists. Want to overwrite?? y/n ";
cin>>overwrite;
if((overwrite=='y')||(overwrite=='Y'))
msgout.cmd=yes;
else
msgout.cmd=no;
}

write(sockfd,(char *)&msgout,sizeof(msgout));

if(msgout.cmd==no)
return;


do
{
/********Reading the local file**********/
count=read(fd,(char *)&msgout.buff,sizeof(msgout.buff));
msgout.flag=count;
/********Writing file to the socket******/
write(sockfd,(char *)&msgout,sizeof(msgout));
}
while(msgout.flag!=0);

}


void ls_req(int sockfd)
{
msgout.type=REQ;
msgout.cmd=ls;
msgout.filename[0]='\0';
cout<<"\n Enter the path:";
cin>>msgout.filename;
write(sockfd,(char *)&msgout,sizeof(msgout));
do
{
read(sockfd,(char *)&msgin,sizeof(msgin));
cout<<msgin.filename;
}
while(msgin.flag==0);

}


void cd_req(int sockfd)
{
msgout.type=REQ;
msgout.cmd=cd;
cout<<"\n Enter the path:";
cin>>msgout.filename;
write(sockfd,(char *)&msgout,sizeof(msgout));

}

void logout_req(int sockfd)
{
msgout.cmd=logout;
write(sockfd,(char*)&msgout,sizeof(msgout));


}
