#include<iostream>
#include<vector>
using namespace std;
class QuickSort
{
    public:
    int pivot;
    int size;
    vector<int>arr;
    QuickSort(int size)
    {
        this->size=size;
        cout<<"Enter the array "<<endl;
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
    }
    int Quicksort(vector<int>&arr,int lowerbound,int upperbound)
    {
        int pivot=arr[lowerbound];
        int start=lowerbound;
        int end=upperbound;
        while(start<end)
        {
            while(arr[start]>=pivot&&start<end) 
            {
                start++;
            }
            while(arr[end]>pivot)
            {
                end--;
            }
            if(start<end)
            {
                swap(arr[start],arr[end]);
            }
        }
        swap(arr[end],arr[lowerbound]);
        return end;
    }
    void sort(int lowerbound,int upperbound)
    {
        if(lowerbound<upperbound)
        {
            int pivotelement=Quicksort(arr,lowerbound,upperbound);
            sort(lowerbound,pivotelement-1);
            sort(pivotelement+1,upperbound);
        }   
        else
        {
            return;
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
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int lowerbound=0;
    int upperbound=size-1;
    QuickSort q(size);
    q.sort(lowerbound,upperbound);
    q.print();
}
// to sort in desending order
// #include<iostream>
// #include<vector>
// using namespace std;
// class QuickSort
// {
//     public:
//     int pivot;
//     int size;
//     vector<int>arr;
//     QuickSort(int size)
//     {
//         this->size=size;
//         cout<<"Enter the array "<<endl;
//         for(int i=0;i<size;i++)
//         {
//             int temp;
//             cin>>temp;
//             arr.push_back(temp);
//         }
//     }
//     int Quicksort(vector<int>&arr,int lowerbound,int upperbound)
//     {
//         int pivot=arr[lowerbound];
//         int start=lowerbound;
//         int end=upperbound;
//         while(start<end)
//         {
//             while(arr[start]>=pivot&&start<end) 
//             {
//                 start++;
//             }
//             while(arr[end]<pivot)
//             {
//                 end--;
//             }
//             if(start<end)
//             {
//                 swap(arr[start],arr[end]);
//             }
//         }
//         swap(arr[end],arr[lowerbound]);
//         return end;
//     }
//     void sort(int lowerbound,int upperbound)
//     {
//         if(lowerbound<upperbound)
//         {
//             int pivotelement=Quicksort(arr,lowerbound,upperbound);
//             sort(lowerbound,pivotelement-1);
//             sort(pivotelement+1,upperbound);
//         }   
//         else
//         {
//             return;
//         }
//     }
//     void print()
//     {
//         for(int i=0;i<size;i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// };
// int main()
// {
//     int size;
//     cout<<"Enter the size of the array ";
//     cin>>size;
//     int lowerbound=0;
//     int upperbound=size-1;
//     QuickSort q(size);
//     q.sort(lowerbound,upperbound);
//     q.print();
// }