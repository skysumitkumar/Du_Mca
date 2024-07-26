//Anuj jain
//roll no 4
//program to create inittab file
#include<sys/socket.h>
#include<fstream>
#include<sys/types.h>
#include<netinet/in.h>
#include<iostream>
#include<fcntl.h>
#include<sys/stat.h>
#include<arpa/inet.h>
#include<unistd.h>
using namespace std;
struct record
{
char filename[100];
int flag;
};
void getdata(record &r)
{
	char ch=' ';
	cout<<"Enter process name ";
	int j=0;
	while((ch=getchar())!='\n')
	{
		r.filename[j]=ch;
		j++;
	}
	getchar();
	r.filename[j]='\0';
	//cin>>r.filename;
	cout<<"Enter mode ";
	cin>>r.flag;
	getchar();
	
}
int main()
{
int fd=open("inittab",O_CREAT|O_WRONLY|O_TRUNC);
record r;
for (int i=0;i<5;i++)
{
getdata(r);
//writin the contents to inittab file
write(fd,(char *)&r,sizeof(r));
}
close(fd);
int fd1=open("inittab",O_RDONLY);
int count=1;
count=read(fd1,(char *)&r,sizeof(r));

while(count)
{
cout<<"\nprocess " <<r.filename<<"   mode "<<r.flag;
count=read(fd1,(char *)&r,sizeof(r));

}
close(fd1);
}




