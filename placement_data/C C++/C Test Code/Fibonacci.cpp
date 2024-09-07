#include<iostream>

using namespace std;

void Fib(int n,int i = 1, int j = 1)
{
    if(n)
    {
        cout<<i<<" ";
        Fib(n-1,j, i+j);
    }
}


int main()
{
    Fib(46);
    getchar();
    return 0;
}
