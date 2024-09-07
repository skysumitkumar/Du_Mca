#include<stdio.h>
#include<string.h>
//typedef int** TYPE;
//int ab=1;
//int a=2;
/*void fun1(int x)
{
char b[]="1234567";
strncpy(b,"abc",x);
int i=0;
for(;sizeof(b);i++)
printf("%c",b[i]?b[i]:'*');

}*/
int main()
{
/*{int i=10;goto ibl;printf("manisha");}
{int i=20;{int i=30;ibl:;}
printf("%i",++i);}*/


/*short testarray[4][3]={ {1},{2,3},{4,5,6}};
printf("%d\n",sizeof(testarray));*/

/*long factorial(long x)
{return x* factorial(x-1);}
printf("%d",factorial(5));*/


/*int f(TYPE x)
{
int *ret=(int *)malloc(sizeof(int[2]));
return ret? *x=ret,0:1;
}
int **p;
f(p);
//**p=1;
//*(*p+1)=2;*/


/*int x[]={1,2,3,4,5};
int *ptr, **ptr2;
ptr=x;
ptr2=&ptr;
*(*ptr2+2)=10;
printf("%d",x[2]);*/


/*int a[4]={4,5,6,7};
int *p=a+3;
printf("%d",*p);
p=&a[3];
printf("%d",*p);*/

/*static char* ptr="Hello";
 *ptr='f';*/
/*char *ptr=const "hello";
*ptr='h';*/

//int a(int a),b=0,c=a((c=b,++b));
/*int a=3;
int b=9;
++a+++b++;*/
/*int a(int a)
{return 0;}*/

/*char c=getchar();
printf("%c",c);*/


/*int a[5]={1,2,3,4,5};
int *aptr;
aptr=a;
printf("element=%d\n",*(aptr+2));

int b=3;
int ab=4;*/
//printf("%i/*%i*/%i",a,b,ab);


/*int z;
int x = 5;
int y = -10;
int a = 4;
int b = 2;
z= x++ + ++y*b/a;
printf("%d",z);

char a[]="abc\012\0x34";//strlen=4,size=9;
char t[]="mani\0";//strlen=4,size=6
char *p="abc\012\0x34";
printf("%d  %d",strlen(a),sizeof(a));*/


/*void fun1(int x)
{
char b[]="1234567";
strncpy(b,"abc",x);
int i=0;
for(;sizeof(b);i++)
printf("%c",b[i]?b[i]:'*');

}*/
char s1[100];
char s2[100];
gets(s1);
fgets(s2,sizeof(s2),stdin);
//puts(s1);
//puts(s2);
printf("%d",strlen(s1));
printf("%d",strlen(s2));
printf("%d\n",strlen(s1)-strlen(s2));

//int x=2;
//fun1(2);
//fun1(6);
/*void my(int X){
if(X>0)
my(--X);
printf("%d",X);
}

my(5);*/
/*char c='\101';
printf("%d",c);*/
}
