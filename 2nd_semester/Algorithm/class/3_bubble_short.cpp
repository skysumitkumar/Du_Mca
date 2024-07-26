#include<iostream>
using namespace std;
class BubbleSort
{
    public:
    int size;
    int *arr;
    int n;
    BubbleSort(int size)
    {
        this->size=size;
        //here i create the dynamic array and initalize its size
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            cin>>n;
            arr[i]=n;
        }
    }
    void sort()
    {
        //in bubble sort outer loop ham size-1 tak chalyange because size-1 time par array sort ho chuka hoga
        for(int i=0;i<size-1;i++)
        {
            //ham yha max element ko piche uski position par shift karte jaaege
            //yha jitne i ki value hogi untna array sort hota jaaega or last index ko hame check karne ki jarurat hi nahi h
            for(int j=0;j<size-i-1;j++)
            {
                //yha hum 2 2 ke pair ko check karke bigger element ko piche shift karte jaaege
                if(arr[j+1]<arr[j])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
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
    ~BubbleSort()
    {
        delete[] arr;
    }
};
int main()
{
    cout<<"Enter the size of the array ";
    int size;
    cin>>size;
    BubbleSort b(size);
    b.sort();
    b.print();
}