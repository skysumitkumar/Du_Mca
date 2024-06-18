//subtraction of 2d array
#include<iostream>
#define R1 5
#define C1 4
#define R2 5
#define C2 4
using namespace std;
int main()
{
    int i,j,a[R1][C1],b[R2][C2];
    cout<<"Enter the first matrix"<<endl;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the second matrix"<<endl;
    for(i=0;i<R2;i++)
    {
        for(j=0;j<C2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    cout<<"The first matrix is"<<endl;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The second matrix is"<<endl;
    for(i=0;i<R2;i++)
    {
        for(j=0;j<C2;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The subtraction of both matrixes is "<<endl;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            cout<<a[i][j]-b[i][j]<<"\t";
        }
        cout<<endl;
    }

}
