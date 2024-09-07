/*#include<stdio.h>
main()
{
int i;
for(i=1;i<=255;i++)
printf("%d\n\t",i);
}*/
*************************
/*#include<stdio.h>
main()
{
int a=3;
printf("%d",a);
main();
printf("ks");
}*/
*************************

/*#include<stdio.h>
#define pow(x) (x)*(x)*(x)
main()
{
int a=3,b=3;
a=pow(b++)/b++;
printf("%d %d",a,b);
}*/
***********************************
/*#include<stdio.h>
main()
{
int a=4,b=4;
printf("%d",printf("%d%d",a,b));
}*/
************************************
/*#include<stdio.h>
main()
{
int x=20;
if(!(!x)&&x)
printf("%d",x);
else
{
x=10;
printf("%d",x);
}}*/
*************************************
/*#include<stdio.h>
main()
{
int x=10;
if(!!x)
printf("%d",x);
}*/
*************************************
/*#include<stdio.h>
main()
{
static int a;
auto int b;
printf("%d %d",a,b);
}*/
*************************************
/*#include<stdio.h>
main()
{
int a=10,b=20;
printf("a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
}*/
*************************************

#include<iostream.h>
class base
{
public:
int i;
};
class A:virtual public base
{
public:
int j;
};
class B:public virtual base
{
public:
int k;
};
class C:public A,public B
{
public:
int l;
};
main()
{
C c;
c.l=10;
c.j=20;
c.k=30;
c.i=40;
cout<<"i="<<c.i;
cout<<"k="<<c.k;
cout<<"j="<<c.j;
cout<<"l="<<c.l;
}
