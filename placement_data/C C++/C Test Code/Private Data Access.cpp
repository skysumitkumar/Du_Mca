#include<iostream>
#include<typeinfo>

using namespace std;


class A
{
    private:
        int a,b,c;
    public:
        A()
        {
           a = b = c = 4;
        }
        void show();
};

void A::show()
{
    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<"\n";
}


int main()
{
    A obj;
    int *p;
    obj.show();
    p = (int*)&obj;
    *p++ = 10;
    *p++ = 11;
    *p++ = 12;
    obj.show();
    getchar();
}

