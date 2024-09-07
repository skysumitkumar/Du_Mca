#include<iostream>
using namespace std;

void bin(int n)
{
    if(!n)
        return;
    bin(n/2);
    cout<<n%2<<" ";
}

int main()
{
    bin(8);
/*
    cout<<endl;
    for(int num = 12;num!=0;num/=2){
        cout<<num%2<<" ";
    }
*/    
    getchar();
    return 0;
}
