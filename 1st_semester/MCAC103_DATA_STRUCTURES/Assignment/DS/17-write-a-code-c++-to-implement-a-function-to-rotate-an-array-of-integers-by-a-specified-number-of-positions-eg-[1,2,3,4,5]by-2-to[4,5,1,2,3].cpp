//write a code c++ to implement a function to rotate an array of integers by a specified number of positions eg [1,2,3,4,5]by 2 to[4,5,1,2,3]
#include<iostream>
#define N 5
using namespace std;
int rotateBy(int a[],int r);
int main()
{
    int i,a[N],r;
    cout<<"Enter the array\n";
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<"Enter how many times that you want to rotate the array\n";
        cin>>r;
    cout<<"\nEntered array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
    rotateBy(a,r);
}
int rotateBy(int a[],int r)
{
    int i,temp;
    while(r!=0)
    {
        temp=a[N-1];
        for(i=N-1;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        r--;
    }
    cout<<"\nPrint the array\n";
    for(i=0;i<N;i++)
        cout<<a[i];
}
