//write a c++ program to that find the insertion of two arrays,returning an array containing elements common to both input array
#include<iostream>
using namespace std;
#define R1 5
#define R2 6
int CommonElements(int a[],int b[]);
int main()
{
    int i,a[R1],b[R2];
    cout<<"Enter the first array\n";
    for(i=0;i<R1;i++)
        cin>>a[i];
        cout<<"Enter the second array\n";
        for(i=0;i<R2;i++)
            cin>>b[i];
            cout<<"The first array is\n";
            for(i=0;i<R1;i++)
                cout<<a[i];
            cout<<"\nThe second array is\n";
            for(i=0;i<R2;i++)
                cout<<b[i];
            cout<<endl;
      CommonElements(a,b);
}
int CommonElements(int a[],int b[])
{
    int i,j;
    cout<<"The common elements in both arrays is\n";
        for(i=0;i<R1;i++)
        {
            for(j=0;j<R2;j++)
            {
                if(a[i]==b[j])
                cout<<b[j];
            }
        }
}
