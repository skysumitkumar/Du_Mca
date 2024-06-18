#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Enter the length of first array ";
    cin>>A;
    cout<<"Enter the length of second array ";
    cin>>B;
    int i,j,count=0,a[A],b[B];
    for(i=0;i<A;i++)
    {
        cout<<i<<" index element of arr a is ";
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<B;i++)
    {
        cout<<i<<" index element of arr b is ";
        cin>>b[i];
    }
    cout<<endl<<"First array is ";
    for(i=0;i<A;i++)
    {
        cout<<a[i];
    }
    cout<<endl<<"Second array is "<<endl;
    for(i=0;i<B;i++)
    {
        cout<<b[i];
    }
    if(A>B)
    {
        for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    }
    else
    for(i=0;i<B;i++)
    {
        for(j=0;j<A;j++)
        {
            if(b[i]==a[j])
            {
                count++;
            }
        }
    }
    
    if(count==0)
    {
        cout<<"No element are common in these arrays";
        
    }
    else
    {
        cout<<endl<<"Union of array a and b is ";
        int c[count],k=0;
        for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                cout<<c[k]<<" ";
                k++;
            }
        }
    }
    }
}