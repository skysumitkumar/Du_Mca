#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Arrange
{
    public:
    int size;
    vector<int>v;
    Arrange(int size)
    {
        this->size=size;
        cout<<"Enter the array ";
        v.resize(size);
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            v[i]=temp;
        }
    }
        void findfrequency(vector<int> v,vector<int> &f)
        {
            for(int i=0;i<v.size();i++)
            {
                f[v[i]]++;
            }
        }
        int findmax(vector<int> v)
        {
            int max=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]>max)
                max=v[i];
            }
            return max;
        }
        void commulativesum(vector<int> &f)
        {
            for(int i=1;i<f.size();i++)
            {
                f[i]=f[i]+f[i-1];
            }
        }
        vector<int> sort()
        {
            int max=findmax(v);
            vector<int>f(max+1,0);
            findfrequency(v,f);
            commulativesum(f);
            vector<int>ne(v.size(),0);
            for(int i=v.size()-1;i>=0;i--)
            {
                int temp=f[v[i]]--;
                ne[f[v[i]]]=v[i];
            }
            return ne;
        }
    void print(vector<int> v1)
    {
        cout<<"Sorted array is "<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<v1[i]<<" ";
        }
    }
};
int main()
{
    int size;
    cout<<"Enter the size "<<endl;
    cin>>size;
    Arrange a(size);
    vector<int>v=a.sort();
    a.print(v);
}