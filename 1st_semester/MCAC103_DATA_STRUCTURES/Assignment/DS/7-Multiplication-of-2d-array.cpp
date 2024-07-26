//multiplication of 2-d arrays
#include<iostream>
#define R1 5
#define C1 4
#define R2 4
#define C2 4
using namespace std;
int main()
{
    int i,j,k,a[R1][C1],b[R2][C2],c[C1][R2],d;
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
    cout<<"The multiplication of both matrixes is "<<endl;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            c[i][j]=0;
            for(k=0;k<R2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

        }
        cout<<endl;
    }
    for(i=0;i<C1;i++)
    {
        for(j=0;j<R2;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

}

