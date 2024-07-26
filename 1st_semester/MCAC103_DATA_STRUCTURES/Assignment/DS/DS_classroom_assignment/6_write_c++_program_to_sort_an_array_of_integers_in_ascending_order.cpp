#include<iostream>
using namespace std;
void SortedArray(int a[],int N);
int main()
{
    int i,N;
    cout<<"Enter the length of the array ";
    cin>>N;
    int a[N];
    if(N==0)
    {
        cout<<"Array is empty firstly insert the array ";
        return 0;
    }
    cout<<"Enter the array\n";
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<"\nThe first array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
        SortedArray(a,N);
        cout<<endl<<"Array after short in ascending order "<<endl;
        for(i=0;i<N;i++)
        {
            cout<<a[i]<<" ";
        }
}
void SortedArray(int a[],int N)
{
    int i,j,s,small,temp;
    for(i=0;i<N-1;i++)
    {
        small=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
