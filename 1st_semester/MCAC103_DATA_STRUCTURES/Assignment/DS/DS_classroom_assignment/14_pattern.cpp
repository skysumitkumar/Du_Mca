#include<iostream>
using namespace std;
int main()
{
    int i,j,R;
    cout<<"Enter the no of rows ";
    cin>>R;
    if(R<3)
    {
        cout<<"Enter the rows greater than 2 for make this type of pattern ";
        return 0;
    }
    int R1,R2;
    R1=R/2+1;
    R2=R/2;
    for(i=0;i<R1;i++)
    {
        if(i==0)
        {
            cout<<"*";
        }
        else
        {
        for(j=0;j<3*i;j++)
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
    for(i=R2;i>0;i--)
    {
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
