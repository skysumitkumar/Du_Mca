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

void sort(stack &s,int i,int j,bool &flag)
{
     if(i<j)
     {
            int top1=s.pop();
            sort(s,i+1,j,flag);
            if(s.is_empty())
            {
               flag=false;
            }
            if(flag==false)
            {
                s.push(top1);
            }
            else
            {
                if(s.show_top()<top1)
                {
                   int temp= s.pop();
                   s.push(top1);
                   s.push(temp);
                }
                else
                    s.push(top1);
            }
      }
}




void sorter(stack &s)
{
     if(s.is_empty())
     {
        cout<<"error : trying to reverse an empty stack";
     }
     else
     {
         bool flag=true;
         int j=1;
         while(flag)
         {
            sort(s,0,j,flag);
            j++;
         }
     }
}






int main()
{
     stack s;
     int ch=1,num;
     do
     {   
           cout<<"\n\n1-Push";
           cout<<"\n2-Pop";
           cout<<"\n3-View Stack";
           cout<<"\n4-Sort Stack";
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
                     case 4: sorter(s);
                             break;
                     case 5: return 0;
           }
     }while(ch!=5);
     return 0;
}                                 
                     
                     
