//program to find the largest element in 1-d array
#include<iostream>
using namespace std;
int Largest(int a[]);
int main()
{
    int i,large,a[9];
    cout<<"Enter the array"<<endl;
    for(i=0;i<9;i++)
        cin>>a[i];
        cout<<"print the array"<<endl;
        for(i=0;i<9;i++)
            cout<<a[i];
            cout<<endl;
        large=Largest(a);

        cout<<"The largest element on the array is "<<large;
}
int Largest(int a[])
{
    int i,j,large;
    large=a[0];
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            if(a[j]>large);
            large=a[j];
        }
    }
    return large;
}
