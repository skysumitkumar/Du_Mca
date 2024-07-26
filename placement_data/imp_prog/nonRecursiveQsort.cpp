#include<iostream.h>

class Stack{

      struct stackEntry{
            int p,q,r;
      };
      stackEntry arr[10];
      int top;
      public :
             Stack()
             {
                    top =-1;
             }
             void push(int a,int b,int c)
             {
                  top++;
                  arr[top].p=a;
                  arr[top].q=b;
                  arr[top].r=c;
             }
             void pop(int *a,int *b,int *c)
             {
                  *a = arr[top].p;
                  *b = arr[top].q;
                  *c = arr[top].r;
                  top--;
             }
             bool isEmpty()
             {
                  return top == -1;
             }
};

int partition(int arr[],int p,int r)
{
    int i,j;
    for(j=p,i=p-1;j<r;j++)
    {
        if(arr[j]<arr[r])
        {
           i++;
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j]= temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[r];
    arr[r]= temp;
    return i;
}
void qsort(int arr[],int p,int r)
{
     Stack s;
     int q;
     do
     {
           if(!s.isEmpty())
           {
              s.pop(&p,&q,&r);
              p=q+1;
           }
           while(p<r)
           {
              q = partition(arr,p,r);
              s.push(p,q,r);
              r = q-1;         
           }
     }while(!s.isEmpty());
}
int main()
{
    int arr[]={3,5,1,7,10,8,6,3,12,4};
    int p = 0;
    int r = sizeof(arr)/sizeof(arr[0]) -1;
    qsort(arr,p,r);
    for(int i=0;i<r;i++)
    cout<<arr[i]<<" ";
    getchar();
}
