#include<iostream>
using namespace std;
int main()
{
    int i,j,space,x=1,N;
    cout<<"Enter the no of rows that you print ";
    cin>>N;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            cout<<" ";
        }
        if(i==0)
        cout<<"*";
        for(j=0;j<3*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
