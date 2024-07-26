#include<iostream>
using namespace std;
int RemoveDuplicate(int a[],int N);
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
    cout<<"\nThe array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
        cout<<endl;
    int count=RemoveDuplicate(a,N);
    cout<<"Array after removing duplicate elements "<<endl;
    for(i=0;i<N-count;i++)
    {
        cout<<a[i]<<" ";
    }
}
int RemoveDuplicate(int a[],int N)
{
    int i,j,k,c=0,count=0;
    for(i=0;i<N-c;i++)
    {
        for(j=i+1;j<N-c;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                c=c+1;
                k=j;
                for(k;k<N-c;k++)
                {
                    a[k]=a[k+1];
                }
            }
        }
    }
    return c;
}