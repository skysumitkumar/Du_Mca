#include<iostream.h>
void disp_bin(unsigned int x)
{
     unsigned int n=~(~0U>>1);
     int num=0;
     while(n)
     {
             if(n&x)
             cout<<"1";
             else cout<<"0";
             n=n>>1;
     }
     cout<<endl;
     getchar();
     
}
void reverse(unsigned int x)
{
     disp_bin(x);
     int size=sizeof(x)*8;
     int i=0;
     unsigned int f,l,m;
     unsigned int p;
     while(i++<size/2)
     {
     p=((unsigned)(~(~0U>>1))>>i-1);
     f=x&p;
     x=x&~p;
     p=(~(~0U<<1))<<i-1;
     l=x&p;
     x=x&~p;
     f=f>>size-2*i+1;
     l=l<<size-2*i+1;
     x=x|f;
     x=x|l;
     }
     disp_bin(x);
}    
                          
int main()
{
    unsigned int x;
    cout<<" enter the number ";
    cin>>x;
    reverse(x);
    getchar();
    return 0;
}    
