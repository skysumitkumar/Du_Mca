#include<iostream>
using namespace std;
class base
{
public:

base(){
cout<<"pointer to base:"<<this<<"\n";
this->fun2();
}
virtual void fun1()=0;
void fun2()
{cout<<"constructing base\n";
}
};


class der:public base
{
public:
der()
{ 
  cout<<"pointer to der:"<<this<<"\n";
   this->fun3();
}


void fun1()
{
cout<<"overriding fun1\n";}


void fun3()
{cout<<"constructing der\n";}


};
int main()
{
//base b;
der d;
d.fun3();
getchar();
return 0;
}


/*base.cpp:20: cannot declare variable `d' to be of type `der'
base.cpp:20:   because the following virtual functions are abstract:
base.cpp:6:     virtual void base::fun1()*/
