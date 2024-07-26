//Addition of 2-d arrays
#include<iostream>
int R1,C1,R2,C2;
using namespace std;
int main()
{
    int i,j,a[R1][C1],b[R2][C2];
    cout<<"Enter the size of row of first matrix ";
    cin>>R1;
    cout<<endl<<"Enter the size of col of first matrix ";
    cin>>C1;
    cout<<"Enter the size of row of second matrix ";
    cin>>R2;
    cout<<endl<<"Enter the size of col of second matrix ";
    cin>>C2;
    if(R1!=R2||C1!=C2)
    {
        cout<<"no of rows and columns of both matrix are wrong we cant add this type of matrix";
        return 0;
    }
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
    cout<<"The addition of both matrixes is "<<endl;
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            cout<<a[i][j]+b[i][j]<<"\t";
        }
        cout<<endl;
    }

}
