#include <iostream.h>
int const SIZE = 10;
typedef class linkListUsingArrays
{
        int data[SIZE];
        int link[SIZE];
        int start;
        int lastUsed;
        int free;
        public :
        linkListUsingArrays()
        {
            int i;
            for(i=0;i<SIZE;i++)
            {
                data[i] = 0;
                link[i] = i+1;
            }
            link[SIZE-1]= -1;
            start = -1;
            lastUsed = -1;
            free = 0;
        }
        void insert(int x)
        {
             if(free == -1)
             {
                      cout<<"List is full";
                      return;
             }
             data[free] = x;
             if(start == -1) 
             {
                      // first element in list
                      start = free;
             }
             if(lastUsed != -1)
             {        
                 link[lastUsed] = free;
             }
             lastUsed = free;
             int nextFree = link[free];
             link[free] = -1;
             free = nextFree;
        }
        void remove(int x)
        {
             if(start == -1)
             {
                      cout<<"List is empty";
                      return;
             }
             int pos=-1;
             if(data[start] == x)
             {
                      // remove first element of list
                      pos = start;
                      start = link[pos];
                      if(start == -1)
                      {
                               // list is empty
                               lastUsed = -1;
                      }
                      link[pos] = free;
                      free = pos;
             }else{
                   for(int i=start;link[i]!=-1;i=link[i])
                   {
                           if(data[link[i]] == x)
                           {
                               pos = i;
                               int nextElement = link[link[i]];
                               if(nextElement == -1)
                               {
                                  // deleting last element of list
                                  lastUsed = i;
                               }
                               link[link[i]] = free;
                               free = link[i];
                               link[i] = nextElement;
                               break;
                           }
                   }
             }
             if(pos == -1)
             {
                    cout<<"element not present";
             }
        }
        void traverse()
        {
             if(start == -1)
             {
                      cout<<"empty list";
             }
             else{
                  for(int i = start ; true; i =link[i])
                  {
                          cout<<data[i]<<" ";
                          if(link[i] == -1)
                          {
                                     break;
                          }
                  }
             }
        }
}linklist;
int main()
{
  linklist obj;
  obj.insert(1);
  obj.insert(2);
  obj.insert(3);  
  obj.insert(4);
  obj.remove(1);
  obj.remove(4);
  obj.insert(1);
  obj.insert(5);
  obj.insert(10);
  obj.remove(10);
  obj.remove(1);
  obj.remove(5);
  obj.insert(1);
  obj.traverse();
  getchar();  
}
