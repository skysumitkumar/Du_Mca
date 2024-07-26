//find the smallest element in array
#include<iostream>
using namespace std;
int main()
{
    int i,arr[5],small;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    small=arr[0];
    for(i=1;i<5;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }
    }
    cout<<"smallest element in array is "<<small;
}
