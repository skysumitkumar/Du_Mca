#include<iostream>
using namespace std;
int main()
{
    int i,j,R,C;
    cout<<"Enter the no of rows that you want to print ";
    cin>>R;
    cout<<"Enter the no of column that you want to print ";
    cin>>C;
    if(R<3||C<3)
    {
        cout<<"Rows and columns are not write two make a hollow rectangle ";
        return 0;
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(i==0||i==R-1)
            {
                cout<<"*";
            }
            else
            {
                if(j==0||j==C-1)
                {
                    cout<<"*";
                }
                else
                cout<<" ";
            }
        }
        cout<<endl;
    }
}