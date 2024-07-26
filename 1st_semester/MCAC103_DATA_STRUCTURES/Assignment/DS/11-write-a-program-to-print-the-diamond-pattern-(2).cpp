//write a program to print the pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,n;
    cout<<"Enter the no of rows";
    cin>>n;
    for(i=n/2+1;i>0;i--)
    {
        for(j=0;j<i-1;j++)
            cout<<" ";
        for(j=0,k;j<2*k-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k++;
    }
    k=k-2;
    for(i=1;i<=n/2;i++)
    {
        for(j=0;j<i;j++)
            cout<<" ";
        for(j=0,k;j<2*k-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k--;
    }
}
