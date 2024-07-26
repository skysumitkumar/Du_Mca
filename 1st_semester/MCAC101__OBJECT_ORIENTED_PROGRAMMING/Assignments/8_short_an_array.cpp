//short an array
#include<iostream>
using namespace std;
#define N 10
int main()
{
    int i,j,a[N],small,temp;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N-1;i++)
    {
        small=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        cout<<a[i];
    }
}
