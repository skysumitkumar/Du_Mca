//write a program to print the pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,n;
    cout<<"Enter the no of rows";
    cin>>n;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=n/2;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

