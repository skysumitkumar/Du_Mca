#include<iostream>
using namespace std;
class selectionSort
{
    public:
    int size;
    //here i make a dynaminc array
    int *arr;
    int n;
    selectionSort(int size)
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
    //selection sort
    void sort(int size)
    {
        int flag=0;
        for(int i=0;i<size-1;i++)
        {
            //firstly i take min element is that which we compare with others
            int min=arr[i];
            //here i take the index of that element which we compare with others
            int index=i;
            for(int j=i+1;j<size;j++)
            {
                //if found min element we save its index and change the flag to 1
                if(arr[j]<min)
                {
                    min=arr[j];
                    index=j;
                    flag=1;
                }
            }
            // if flag is 1 then swap the indexed no to the ith no and change flag
            if(flag)
            {
                int temp=arr[i];
                arr[i]=min;
                arr[index]=temp;
                flag=0;
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
    ~selectionSort()
    {
        delete[] arr;
    }
};
int main()
{
    cout<<"Enter the size of the array ";
    int size;
    cin>>size;
    selectionSort a(size);
    a.sort(size);
    a.printarray();
}