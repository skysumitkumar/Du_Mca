#include<iostream>
using namespace std;
class InsertionSort
{
    public:
    int size;
    //here i make a dynaminc array
    int *arr;
    int n;
    InsertionSort(int size)
    {
        this->size=size;
        //make a dynamic array and give it to size
        arr=new int[size];
        cout<<endl<<"Enter the array ";
        for(int i=0;i<size;i++)
        {
            cin>>n;
            arr[i]=n;
        }
    }
    //Insertion sort
    void sort(int size)
    {
        //here we start outer loop with o to size-1 because when we are at size-1 index so our unsorted element is 1 left that we takel with inner for loop
        for(int i=0;i<size-1;i++)
        {
            //here we check i+1 index with every sorted left side array jab tak 1 index tak check nahi kar late
            for(int j=i+1;j>0;j--)
            {
                //if j-1 element is small than jth element than swap them
                if(arr[j]<arr[j-1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
    void printarray()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    ~InsertionSort()
    {
        delete[] arr;
    }
};
int main()
{
    cout<<"Enter the size of the array ";
    int size;
    cin>>size;
    InsertionSort a(size);
    a.sort(size);
    a.printarray();
}