#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    cout<<"Enter the no of rows that you want to print ";
    cin>>N;
    if(N==0)
    {
        cout<<"Enter the correct no of rows ";
        return 0;
    }
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
