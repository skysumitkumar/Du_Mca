#include<stdio.h>
void pascal abc(int,int,int,int,int);
main()
{
	int p[5]={100,99,98,100,100};
	int *ptr;
	ptr=p;
	abc(*ptr++,*++ptr,++*ptr,++*ptr,*++ptr);
	ptr=p;
	++ptr;
	printf("%d %d %d",--*ptr,*--ptr,++*ptr);

}
 void pascal abc(int a,int b,int c, int d,int e)
{
	printf("%d %d %d %d %d",a,b,c,d,e);
}
