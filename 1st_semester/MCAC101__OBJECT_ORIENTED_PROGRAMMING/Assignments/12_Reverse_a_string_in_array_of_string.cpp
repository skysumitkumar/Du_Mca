//Reverse a string in array of string
#include<iostream>
using namespace std;
#define N 5
int main()
{
    int i,j,temp,s,n;
    string a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        s=a[i].size();
        n=s-1;
        for(j=0;j<s/2;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][n];
            a[i][n]=temp;
            n--;

        }
    }
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }
}
