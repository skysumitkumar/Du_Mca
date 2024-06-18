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

enum type_msg{AM,REQ,REP};
enum command{GET,PUT,ls,cd,logout,error,ok,yes,no};

struct message
{
type_msg type;
command cmd;
char filename[100];
char buff[1024];
int flag;
};




