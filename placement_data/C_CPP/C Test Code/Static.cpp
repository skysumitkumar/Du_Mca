#include<iostream>
using namespace std;
class base
{
       protected:
                 int i;
       public:
              base()
              {
                    cout<<endl<<&i;
              }
};

class derived:public base
{
      public:
             derived():base()
             {
                             cout<<endl<<&i;
             }
};

int main()
{
    int i;
    derived d;
    base b;
    cin>>i;
    return 0;
}
