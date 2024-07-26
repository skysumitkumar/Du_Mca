//write a program to remove the duplicate elements from the array
#include<iostream>
using namespace std;
#define N 10
int RemoveDuplicate(int a[]);
int main()
{
    int i,a[N];
    cout<<"Enter the array\n";
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<"\nThe array is\n";
    for(i=0;i<N;i++)
        cout<<a[i];
    RemoveDuplicate(a);
}
int RemoveDuplicate(int a[])
{
    int i,j,k,c=0;
    for(i=0;i<N-c;i++)
    {
        for(j=i+1;j<N-c;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
                k=j;
                for(k;k<N-c;k++)
                {
                    a[k]=a[k+1];
                }
            }
        }
    }
   cout<<"\nThe New array is\n";
    for(i=0;i<N-c;i++)
        cout<<a[i];
}
