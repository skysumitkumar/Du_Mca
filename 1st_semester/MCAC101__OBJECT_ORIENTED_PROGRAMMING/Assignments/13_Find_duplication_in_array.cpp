//find duplication in array
#include<iostream>
using namespace std;
#define N 10
void shortarray(int a[])
{
    int i,j,temp;
    for(i=0;i<N-1;i++)
    {
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
}
int main()
{
    int i,j,a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    shortarray(a);
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"found duplicate";
                return 0;
            }
        }
    }
    cout<<"there is no duplicate elements in this array";
    return 0;
}
