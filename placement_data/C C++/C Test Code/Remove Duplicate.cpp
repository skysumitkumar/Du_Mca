#include<iostream>
using namespace std;

int main()
{
    int i;
    char a[]="mississipi";
    int x=0;
    for ( i=0;i<strlen(a);i++)
    {
        if(!(x & (1<<a[i]-'a')))
        {
                cout<<a[i];
                x|=(1<<a[i]-'a');
        }
    }
    cin>>i;
    return 0;
}
