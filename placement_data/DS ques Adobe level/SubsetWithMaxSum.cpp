/*
  Name: To find the maximum sum of a sequnce
  Copyright: varun
  Author: varun maini
  Date: 22/07/07 17:48
  Description: it accepts an array of -ve and +ve numbers
  and returns the subarray with the maximum sum
*/
#include<iostream.h>
int max_sum(int arr[],int &a,int &b)
{
    int x=-9999,y=0,z=0;
    int i,j;
    for(i=0;i<10;i++)
    {
        if(arr[i]<0 && arr[i]>x)
        {
          x=arr[i];a=b=i;
        }
        if(arr[i]>=0)
        {
           x=arr[i];a=b=i;
           break;
        }
    }   
     for(j=i+1;j<10;j++)
     {
        if(arr[j]>0 && y==0)
        {
           x+=arr[j];
           b=j;
           z=0;
        }
        if(arr[j]>0 && y<0)
        {
           z+=arr[j];
           if(z+y>0)
           {
             x+=z+y;
             b=j;
             z=y=0;
           }
           else if(z>x)
           {
                x=z;
                a=b=j;
                z=y=0;
           }
        }
        if(arr[j]<0)
        {
           y+=arr[j];
        }     
     }
     return x;                  
    }
                              
int main()
{
    int arr[10];
    int a,b,sum,i;
    cout<<" enter 10 numbers \n ";
    for(i=0;i<10;i++)
    cin>>arr[i];
    sum=max_sum(arr,a,b);
    cout<<"\n the subset with max sum is ";
    for(i=a;i<=b;i++)
      cout<<arr[i];
    cout<<" sum is "<<sum;
    getchar();
    getchar();
    return 0;
}
    
