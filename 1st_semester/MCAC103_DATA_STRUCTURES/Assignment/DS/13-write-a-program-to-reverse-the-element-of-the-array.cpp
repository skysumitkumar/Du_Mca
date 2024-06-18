//write a program to reverse the element of the array
#include<iostream>
#define R 10
using namespace std;
int ReverseArray(int a[]);
int main()
{
    int i,a[R];
    cout<<"Enter the array\n";
    for(i=0;i<R;i++)
        cin>>a[i];
    cout<<"\nThe entered array is\n";
    for(i=0;i<R;i++)
        cout<<a[i];
        ReverseArray(a);

}
int ReverseArray(int a[])
{
    int i,temp,r=R-1;
    for(i=0;i<R/2;i++)
    {
        temp=a[r];
        a[r]=a[i];
        a[i]=temp;
        r--;
    }
    cout<<"\nThe New array is\n";
    for(i=0;i<R;i++)
        cout<<a[i];
}
