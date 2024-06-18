//no of occurence of each element in the shorted array
#include<iostream>
using namespace std;
#define N 10
void shortArray(int a[])
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
    int i,j,cnt,a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    shortArray(a);

    for(i=0;i<N-1;i++)
    {
        cnt=1;
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
                i++;
            }
            else
                break;
        }
        cout<<"The no of occurence of "<<a[i]<<"is: "<<cnt<<endl;
    }
}
