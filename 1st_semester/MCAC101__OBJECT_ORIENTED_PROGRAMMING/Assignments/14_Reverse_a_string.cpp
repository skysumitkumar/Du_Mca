#include<iostream>
using namespace std;
int main()
{
    int i,n,temp,a;
    string s;
    getline(cin,s);
    n=s.size()-1;
    a=n;
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[a];
        s[a]=temp;
        a--;
    }
    for(i=0;i<=n;i++)
        cout<<s[i];
}
