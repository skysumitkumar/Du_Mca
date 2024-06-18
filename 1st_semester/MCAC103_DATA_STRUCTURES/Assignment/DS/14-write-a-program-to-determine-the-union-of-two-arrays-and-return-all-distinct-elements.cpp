//write a program to determine the union of two arrays and return all distinct elements
#include<iostream>
using namespace std;
#define N1 5
#define N2 5
int UnionOFBothArray(int a[],int b[]);
int main()
{
    int i,a[N1],b[N2];
    cout<<"Enter the first array\n";
    for(i=0;i<N1;i++)
        cin>>a[i];
    cout<<"\nEnter the second array\n";
    for(i=0;i<N2;i++)
        cin>>b[i];
    cout<<"\nThe first array is\n";
    for(i=0;i<N1;i++)
        cout<<a[i];
    cout<<"\nThe first array is\n";
    for(i=0;i<N2;i++)
        cout<<b[i];
        UnionOFBothArray(a,b);
}
int UnionOFBothArray(int a[],int b[])
{
    int i,j,c[N1+N2];
    for(i=0;i<N1+N2;i++)
    {
        for(j=0;j<N1;j++)
            c[i++]=a[j];
        for(j=0;j<N2;j++)
            c[i++]=b[j];
    }
    cout<<"\nThe New array is\n";
    for(i=0;i<N1+N2;i++)
        cout<<c[i];
}
