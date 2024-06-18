#include<iostream>
#include<string.h>
using namespace std;

union A
{
    int i;
    char ch;
}z;

int main()
{
    int i;
    z.i = 1;
    printf("ch = %d \n", z.ch);
    
    scanf("%d",&i);
    return 0;
}
