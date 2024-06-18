//Traverse of 2d array
#include<iostream>
using namespace std;
int main()
{
    int i,j,R,C;
    cout<<"Enter the no of rows in matrix ";
    cin>>R;
    cout<<"Enter the no of column in matrix ";
    cin>>C;
    int a[R][C];
    if(R==0||C==0)
    {
        cout<<"This type of matrix is not possible ";
        return 0;
    }
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
}
    
