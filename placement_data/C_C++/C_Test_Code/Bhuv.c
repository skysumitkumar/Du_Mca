#include<stdio.h>

struct abc
{
    int a;
};
int main()
{
  struct  abc x,y;
int a=5,b=3,c,d;
c=a,b;
d=(a,b);
x.a=10;
y=x;
printf("%d",y.a);

y.a=a**2;
printf("%d",y.a);
printf(" c = %d , d = %d",c,d);
getchar();
return 0;

}

    
    
