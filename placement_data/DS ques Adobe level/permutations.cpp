#include <iostream.h>
void perm(int *,int,int);
int main()
{
    cout<<" enter numbers to permute ";
    int x;
    cin>>x;
    int arr[10];
    perm(arr,1,x);
    getchar();
    getchar();
    return 0;
}
void perm(int * arr, int num, int limit)
{
     if(num>limit)
     {
      for(int i=0;i<limit;i++)
              cout<<arr[i]<<" ";
      cout<<endl;
     }
     else
     {
         for(int i=0;i<num;i++)
         {
                 for(int j=num-2;j>=i;j--) 
                         arr[j+1]=arr[j];
                 arr[i]=num;
                 perm(arr,num+1,limit);
                 for(int j=i;j<=num-2;j++)
                         arr[j]=arr[j+1];
         }
     }
}                                
     
