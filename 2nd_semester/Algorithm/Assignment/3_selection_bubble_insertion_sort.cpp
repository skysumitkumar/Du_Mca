#include<iostream>
using namespace std;
class sort
{
    public:
    int n;
    int *arr;
    int size;
    sort(int size)
    {
        this->size=size;
        arr=new int[size];
        cout<<"Enter the array ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void SelectionSort()
    {
        int min;
        int index;
        for(int i=0;i<size-1;i++)
        {
            min=arr[i];
            index=i;
            for(int j=i+1;j<size;j++)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    index=j;
                }
            }
            if(index!=i)
            {
                int temp=arr[index];
                arr[index]=arr[i];
                arr[i]=temp;
            }
        }
    }
    void BubbleSort()
    {
            int flag;
            for(int i=0;i<size;i++)
            {
                flag=0;
                for(int j=0;j<size-i-1;j++)
                {
                    if(arr[j+1]<arr[j])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                    if(flag==0)
                    {
                        return;
                    }
                }
            }
    }
    void InsertionSort()
    {
            for(int i=0;i<size;i++)
            {
                for(int j=i;j>0;j--)
                {
                    if(arr[j-1]>arr[j])
                    {
                        int temp=arr[j-1];
                        arr[j-1]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
    }
    
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    cout<<"Enter the size of the array ";
    int size;
    cin>>size;
    sort s(size);
    cout<<endl<<"Enter 1 for Selection Sort "<<endl;
    cout<<"Enter 2 for Bubble Sort "<<endl;
    cout<<"Enter 3 for Insertion Sort "<<endl;
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        {
            s.SelectionSort();
            break;
        }
        case 2:
        {
            s.BubbleSort();
            break;
        }
        case 3:
        {
            s.InsertionSort();
            break;
        }
    }
    s.print();
}