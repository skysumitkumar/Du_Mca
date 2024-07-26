#include<iostream>
using namespace std;
#define N 5
int main()
{
    int i,j,space,x=1;
    for(i=N;i>0;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=x;j++)
        {
            cout<<"*";
        }
        x++;
        cout<<endl;
    }
}
