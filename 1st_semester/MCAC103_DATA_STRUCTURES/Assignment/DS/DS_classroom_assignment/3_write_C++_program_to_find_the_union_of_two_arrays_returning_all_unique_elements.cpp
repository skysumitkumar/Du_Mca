#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N1,N2;
void sort(int a[],int n)
{
    int i,j,small,temp;
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        for(j=i+1;j<n;j++)
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
int main()
{
    vector<int>Union;
    int i,j,count=0;
    cout<<"Enter the length of first array ";
    cin>>N1;
    cout<<"Enter the length of Second array ";
    cin>>N2;
    int a[N1],b[N2];
    //Enter the first array
    cout<<endl<<"Enter the first array"<<endl;
    for(i=0;i<N1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the second array"<<endl;
    //Enter the second array
    for(i=0;i<N2;i++)
    {
        cin>>b[i];
    }
    sort(a,N1);
    sort(b,N2);
    // sort(a,a+N1);
    // sort(b,b+N2);
    i=0,j=0;
    int k=0;
    while(i!=N1&&j!=N2)
    {
        if(i!=0||j!=0)
        {
            if(a[i]==Union[k-1])
            {
                i++;
                if(i==N1)
                break;
            }
        }
        if(a[i]<b[j])
        {
            Union.push_back(a[i]);
            i++;
            k++;
        }
        else
        {
            Union.push_back(b[j]);
            j++;
            k++;
        }
        
    }
    while(i!=N1)
    {
        if(a[i]==Union[k-1])
        {
            i++;
            continue;
        }
        Union.push_back(a[i]);
        i++;
        k++;
    }
    while(j!=N2)
    {
        if(b[j]==Union[k-1])
        {
            j++;
            continue;
        }
        Union.push_back(b[j]);
        j++;
        k++;
    }
    cout<<"union of both arrays are"<<endl;
    int r=Union.size();
    for(i=0;i<r;i++)
    {
        cout<<Union[i]<<" ";
    }
}