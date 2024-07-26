#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Arrange
{
    public:
    int size;
    vector<int>v;
    Arrange(int size)
    {
        this->size=size;
        v.resize(size);
        cout<<"Enter the array ";
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            v[i]=temp;
        }
    }
        void findfrequency(vector<int> &v1,vector<int> &f,int shift)
        {
            for(int i=0;i<f.size();i++)
            f[i]=0;
            int rem=0;
            for(int i=0;i<v1.size();i++)
            {
                rem=(int)(v1[i]/pow(10,shift-1))%10;
                f[rem]++;
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
            int count=0;
            while(max>0)
            {
                count++;
                max=max/10;
            }
            vector<int>f(10,0);
            vector<int>v1(v.size(),0);
            int rem=0;
            int flag=0;
            for(int i=0;i<count;i++)
            {
                if(flag==0)
                    findfrequency(v,f,i+1);
                else
                    findfrequency(v1,f,i+1);
                commulativesum(f);
                if(flag==0)
                {
                    for(int j=v.size()-1;j>=0;j--)
                    {
                        int rem=(int)(v[j]/pow(10,i+1-1))%10;
                        int index=--f[rem];
                        v1[index]=v[j];
                    }
                    flag=1;
                    for(int l=0;l<v.size();l++)
                    {
                        cout<<v[l]<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    for(int j=v1.size()-1;j>=0;j--)
                    {
                        int rem=(int)(v1[j]/pow(10,i+1-1))%10;
                        int index=--f[rem];
                        v[index]=v1[j];
                    }
                    flag=0;
                    for(int l=0;l<v.size();l++)
                    {
                        cout<<v1[l]<<" ";
                    }
                    cout<<endl;
                }
            }
            if(flag==0)
            return v;
            else
            return v1;
        }
    void print(vector<int> x)
    {
        cout<<"Sorted array is "<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<x[i]<<" ";
        }
    }
};
int main()
{
    int size;
    cout<<"Enter the size "<<endl;
    cin>>size;
    Arrange a(size);
    vector<int>x=a.sort();
    a.print(x);
    return 0;
}