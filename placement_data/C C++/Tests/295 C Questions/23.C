#include<stdio.H>
#include<dos.h>
main(int argc, char *argv[])
{
	fun();
}
fun()
{
	int i;
	for(i=0;i< argc;i++)
        printf("%s",argv[i]);
}