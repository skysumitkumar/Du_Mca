#include<iostream>
using namespace std;
#include<vector>
class Mergesort
{
    public:
    int size;
    vector<int>v;
    Mergesort(int size)
    {
        this->size=size;
        v.resize(size);
        cout<<"Enter the array "<<endl;
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            v[i]=temp;
        }
    }
    void Merge(vector<int>&v,int start,int end,int mid)
    {
        int size1=mid-start+1;
        int size2=end-mid;
        int arr[size1];
        int arr1[size2];
        int s=start;    
        int m=mid+1;
        int i=0,j=0;
        //here i copy array
        for(int i=0;i<size1;i++)
        {
            arr[i]=v[s];
            s++;
        }
        for(int i=0;i<size2;i++)
        {
            arr1[i]=v[m];
            m++;
        }
        i=0;
        j=0;
        s=start;
        //here i checking array and arrange in sorted manner
        while(i<size1&&j<size2)
        {
            if(arr[i]<arr1[j])
            {
                v[s]=arr[i];
                i++;
                s++;
            }
            else
            {
                v[s]=arr1[j];
                j++;
                s++;
            }
        }
        //if any array left than traversing than we traverse that and arrange thoes no's in sorted manner
        while(i<size1)
        {
            v[s]=arr[i];
            i++;
            s++;
        }
        while(j<size2)
        {
            v[s]=arr1[j];
            j++;
            s++;
        }
    }
    void sort(int start,int end)
    {
        if(start<end)
        {
            int mid=(start+end)/2;
            sort(start,mid);
            sort(mid+1,end);
            Merge(v,start,end,mid);
        }
        
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<v[i]<<" ";
        }
    }
};
int main()
{
    int size;
    cout<<"Enter the size; ";
    cin>>size;
    Mergesort m(size);
    int start=0;
    int end=size-1;
    m.sort(start,end);
    m.print();
}