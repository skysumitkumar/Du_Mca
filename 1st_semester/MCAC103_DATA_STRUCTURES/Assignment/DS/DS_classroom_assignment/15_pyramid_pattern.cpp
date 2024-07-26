#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    cout<<"Enter the no of rows that you print ";
    cin>>N;
    if(R<3)
    {
        cout<<"Enter the rows greater than 2 for make this type of pattern ";
        return 0;
    }
    int R1=N/2+1,R2=N/2;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<R1-i;j++)
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
    for(i=R2;i>0;i--)
    {
        for(j=0;j<=R2-i+1;j++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            cout<<"*";
            break;
        }
        for(j=0;j<3*i-3;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
