#include<iostream>
#include<algorithm>
using namespace std;
class SearchingAlgo
{
    public:
    int size;
    int target;
    int *arr;
    bool sorted;
    SearchingAlgo(int size,int target)
    {
        this->size=size;
        this->target=target;
        arr=new int[size];
        cout<<endl<<"Enter the array ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        sorted=is_sorted(arr,arr+size);

        if (sorted)
        {
            cout<<"Array is sorted"<<endl;
        }
        else
        {
            cout<<"Array is not sorted"<<endl;
        }
    }
    int linearSearchIterative(int size,int target)
    {
        int i=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
    int linearSearchRecursive(int size,int target)
    {
        static int i=0;
        if(arr[i]==target)
        {
            return i;
        }
        if(i>size)
        {
            return -1;
        }
        i++;
        return linearSearchRecursive(size,target);
    }
    int binarySearchIterative(int start,int size,int target)
    {
        sort(arr,arr+size);
        int mid;
        mid=(start+size)/2;
        while(start<=size)
        {
            if(arr[mid]==target)
            {
                return mid;
            }
            else
            {
                if(target<arr[mid])
                {
                    size=mid-1;
                }
                if(target>arr[mid])
                {
                    start=mid+1;
                }
            }
            mid=(start+size)/2;
        }
        return -1;
    }
    int binarySearchRecursive(int start,int size,int target)
    {
        if(sorted==0)
        {
            sort(arr,arr+size);
            sorted=-1;
        }
        int mid=(start+size)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(start==size)
        {
            return -1;
        }
        if(target>arr[mid])
        {
            return binarySearchRecursive(mid+1,size,target);
        }
        if(target<arr[mid])
        {
            return binarySearchRecursive(start,mid-1,target);
        }
        return mid;
    }
};
int main()
{
    int size;
    cout<<"Enter the size ";
    cin>>size;
    int target;
    cout<<endl<<"Enter the target that you want to find ";
    cin>>target;
    SearchingAlgo s(size,target);
    int index;
    int which;
    cout<<endl<<"Enter 1 for linearSearchIterative"<<endl;;
    cout<<"Enter 2 for linearSearchingAlgoRecursive"<<endl;
    cout<<"Enter 3 for binarySearchIterative"<<endl;
    cout<<"Enter 4 for binarySearchRecursive"<<endl;
    cin>>which;
    switch(which)
    {
        case 1:
        {
            int index=s.linearSearchIterative(size,target);
            cout<<"The index is "<<index;
            break;
        }
        case 2:
        {
            index=s.linearSearchRecursive(size-1,target);
            cout<<"The index is "<<index;
            break;
        }
        case 3:
        {
            index=s.binarySearchIterative(0,size-1,target);
            cout<<"The index is "<<index;
            break;
        }
        case 4:
        {
            index=s.binarySearchRecursive(0,size-1,target);
            cout<<"The index is "<<index;
            break;
        }
        defaut:
        {
            cout<<"This is wrong choice "<<endl;
        }
    }
}
