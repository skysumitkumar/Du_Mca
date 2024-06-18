#include<iostream>

using namespace std;

int main()
{
   int i = 1;

static int  a[ ]   = {0,1,2,3,4};
int  *p[ ] = {a,a+1,a+2,a+3,a+4};
int  **ptr =  p;
ptr++;
printf("%d  ",ptr);
printf("%d  ",p);
printf("%d  ",a);


printf("\n %d  %d  %d", ptr-p, *ptr-a, **ptr); 
*ptr++;
printf("\n %d  %d  %d", ptr-p, *ptr-a, **ptr); 
*++ptr;
printf("\n %d  %d  %d", ptr-p, *ptr-a, **ptr); 
++*ptr;
printf("\n %d  %d  %d", ptr-p, *ptr-a, **ptr); 

    scanf("%d",&i);
}
