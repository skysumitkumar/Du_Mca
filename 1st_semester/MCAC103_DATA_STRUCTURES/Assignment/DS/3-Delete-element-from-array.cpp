//Delete element from array
#include<iostream>
#define N 10
using namespace std;
int main()
{
    int i,j,a[N],n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<endl<<"Print the array"<<endl;
    for(i=0;i<N;i++)
        cout<<a[i];
    cout<<endl<<"Enter the number that you want to delete "<<endl;
    cin>>n;
    for(i=0;i<N;i++)
    {
        if(a[i]==n)
        {
            for(j=i;j<N;j++)
            a[j]=a[j+1];
        }
    }
    for(i=0;i<N-1;i++)
    cout<<a[i];
}
