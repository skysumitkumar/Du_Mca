//Transpose of 2d array
#include<iostream>
using namespace std;
int main()
{
    int i,j,R,C,temp;
    cout<<"Enter the size of row of the matrix ";
    cin>>R;
    cout<<endl<<"Enter the size of col of the matrix ";
    cin>>C;
    if(R==0||C==0)
    {
        cout<<"This type of matrix is not possible ";
        return 0;
    }
    int a[R][C];
    cout<<endl<<"Enter the matrix"<<endl;
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
    int newarr[C][R];
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            newarr[j][i]=a[i][j];
        }
    }
    for(i=0;i<C;i++)
    {
        for(j=0;j<R;j++)
        {
            cout<<newarr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
