//write to sort an array in ascending order
//Retry it again
#include<iostream>
using namespace std;
#define N 10
int SortedArray(int a[]);
int main()
{
    int i,a[N];
    cout<<"Enter the array\n";
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<"\nThe first array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
        SortedArray(a);
}
int SortedArray(int a[])
{
    int i,j,s,small,temp;
    for(i=0;i<N-1;i++)
    {
        small=a[i];
        for(j=1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                s=j;
            }
        }
        temp=a[s];
        a[s]=a[i];
        a[i]=temp;
    }
    cout<<"\nThe new array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
}
