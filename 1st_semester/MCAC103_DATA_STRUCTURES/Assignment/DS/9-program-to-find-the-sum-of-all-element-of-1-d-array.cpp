//program to find the sum of all element of 1-d array
#include<iostream>
using namespace std;
int Sum(int a[]);
int main()
{
    int i,s,a[9];
    cout<<"Enter the array"<<endl;
    for(i=0;i<9;i++)
        cin>>a[i];
        cout<<"print the array"<<endl;
        for(i=0;i<9;i++)
            cout<<a[i];
            cout<<endl;
        s=Sum(a);
        cout<<"The sum of all element of array is "<<s;
}
int Sum(int a[])
{
    int i,j,s=0;
    for(i=0;i<9;i++)
    {
        s+=a[i];
    }
    return s;
}
