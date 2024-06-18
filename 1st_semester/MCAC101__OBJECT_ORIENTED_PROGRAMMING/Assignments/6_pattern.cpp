#include<iostream>
using namespace std;
#define N 5
int main()
{
    int i,j,k,l;
    for(i=4;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            cout<<" ";
        }
        k=1;
        l=1;
        for(j=1;j<=l;j++)
        {
           cout<<k;
           k=k*2;
        }
        for(j=1;j<l-1;j++)
        {
            k=k-2;
            cout<<k;
        }
        l++;
        cout<<endl;
    }
}
