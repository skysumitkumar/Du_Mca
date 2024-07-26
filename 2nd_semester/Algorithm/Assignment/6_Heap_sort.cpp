#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
class QuickSort 
{
public:
    vector<int>v;
    QuickSort(int size) {
        cout<<"Enter the array elements: ";
        for (int i=0;i<size;i++) 
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
    }
    void heapify(int N,int i) 
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<N&&v[l]>v[largest])
            largest=l;
        if(r<N&&v[r]>v[largest])
            largest=r;
        if(largest!=i) 
        {
            swap(v[i],v[largest]);
            heapify(N,largest);
        }
    }
    void heapSort(int N) 
    {
        for(int i=N/2-1;i>=0;i--)
            heapify(N,i);
        for(int i=N-1;i>0;i--) 
        {
            swap(v[0],v[i]);
            heapify(i,0);
        }
    }
    void print() 
    {
        cout<<"Sorted array: ";
        for (int i=0;i<v.size();++i)
            cout<<v[i]<<" ";
        cout<<endl;
    }
};
int main() 
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    QuickSort q(size);
    q.heapSort(size);
    q.print();
    return 0;
}
