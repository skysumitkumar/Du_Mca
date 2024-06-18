//product and sum of element of an array
#include<iostream>
using namespace std;
#define N 5
int main()
{
    int i,sum,prod=1,a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];
        prod=prod*a[i];
    }
    cout<<"sum of the array is: "<<sum<<endl;
    cout<<"product of the array is: "<<prod;
}
