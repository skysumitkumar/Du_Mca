#include <iostream.h>
class stack
{
      int num[1000];
      int top;
      public:
      stack()
      {
             top=-1;
      }
      bool is_empty()
      {
           return top==-1;
      }
      void push(int n)
      {
           num[++top]=n;
      }
      int pop()
      {
          return num[top--];
      }
      int show_top()
      {
          return num[top];
      }
      void traverse()
      {
           for(int i=top;i>=0;i--)
               cout<<num[i]<<" ";
      }
};

void rev(stack &s,int top1,bool &flag,int i,int &len)
{
     if(flag==false || i<len)
     {
        if(s.is_empty())
        {
          flag=true;
          len=i;
          s.push(top1);
        }
        else
        {
          int top2=s.pop();
          rev(s,top1,flag,i+1,len);
          s.push(top2);
        }
     }
     else if(i>=len)
     {
              s.push(top1);
     }      
}




void reverse(stack &s)
{
     if(s.is_empty())
     {
        cout<<"error : trying to reverse an empty stack";
     }
     else
     {
         int len=10;
         bool flag = false;
         for(int i=1;i<=len-1;i++)
         {
                 int top1=s.pop();
                 rev(s,top1,flag,i,len);
         }
         
     }
}






int main()
{
     stack s;
     int ch=1,num;
     do
     {   
           cout<<"\n1-Push";
           cout<<"\n2-Pop";
           cout<<"\n3-View Stack";
           cout<<"\n4-Reverse Stack";
           cout<<"\n5-exit";
           cout<<"\nenter choice :  ";
           cin>>ch;
           switch(ch)
           {
                     case 1 : cout<<"enter element";
                              cin>>num;
                              s.push(num);
                              break;
                     case 2: cout<<"poped element is "<<s.pop();
                             break;
                     case 3: s.traverse();
                             break;
                     case 4: reverse(s);
                             break;
                     case 5: return 0;
           }
     }while(ch!=5);
     return 0;
}                                 
                     
                     
