#include<iostream>
using namespace std;
int ReverseArray(int a[],int R);
int main()
{
    int i,R;
    cout<<"Enter the length of the array ";
    cin>>R;
    int a[R];
    if(R==0)
        {
            cout<<"Array is empty firstly enter the array ";
            return 0;
        }
    cout<<"Enter the array\n";
    for(i=0;i<R;i++)
        cin>>a[i];
        
    cout<<"\nThe entered array is\n";
    for(i=0;i<R;i++)
        cout<<a[i];
        ReverseArray(a,R);

}
int ReverseArray(int a[],int R)
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
