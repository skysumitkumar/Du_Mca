#include<iostream>
using namespace std;

int i;

int& fun()
{
    return i; // u can return any reference like to Struct
}

int main()
{
    int t = 9;
    
    fun() = 10;    
    printf("i = %d\n",i);


    scanf("%d",&t);
}
    
