//program to find the Average of 1-d array
#include<iostream>
using namespace std;
int Avg(int a[]);
int main()
{
    int i,A,a[9];
    cout<<"Enter the array"<<endl;
    for(i=0;i<9;i++)
        cin>>a[i];
        cout<<"print the array"<<endl;
        for(i=0;i<9;i++)
            cout<<a[i];
            cout<<endl;
        A=Avg(a);
        cout<<"The sum of all element of array is "<<A;
}
int Avg(int a[])
{
    int i,j,s=0,A;
    for(i=0;i<9;i++)
    {
        s+=a[i];
    }
    A=s/9;
    return A;
}
