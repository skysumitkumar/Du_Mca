//Transpose of 2d array
#include<iostream>
#define R 4
#define C 3
using namespace std;
int main()
{
    int i,j,a[R][C];
    cout<<"Enter the matrix"<<endl;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is"<<endl;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The transpose of matrix is"<<endl;
    for(j=0;j<C;j++)
    {
        for(i=0;i<R;i++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
