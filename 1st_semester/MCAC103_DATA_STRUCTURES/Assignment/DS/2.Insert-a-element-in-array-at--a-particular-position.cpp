//Insert a element in array at  a particular position
#include<iostream>
#define N 10
using namespace std;
int main()
{
    int i,num,index,a[N];
    cout<<"Enter the array"<<endl;
    for(i=0;i<N-1;i++)
        cin>>a[i];
    cout<<endl<<"Enter the index where you want to add a number ";
    cin>>index;
    cout<<endl<<"Enter the number that you want to add "<<endl;
    cin>>num;
    cout<<endl;
    for(i=N-1;i>=0;i--)
    {
        if(i==index)
        {
            a[i]=num;
            i=0;
        }
        else
        {
            a[i]=a[i-1];
        }
    }
    cout<<"Print the array after updated"<<endl;
    for(i=0;i<N;i++)
        cout<<a[i]<<"\t";

}
