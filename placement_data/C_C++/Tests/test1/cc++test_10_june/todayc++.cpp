/*Q23.
#include<iostream>
using namespace std; 
class Parent
{
 public:
Parent()
{status();}
virtual ~Parent(){status();}
virtual void status(){ cout<<"Parent";}
};
class Child :public Parent {
public:
Child()
{status();
}
virtual ~Child(){status();}
virtual void status(){ cout<<"Child";}
};


int main()
{
Child c;
return 0;
}
*/

/*Q14.
#include <iostream>
using namespace std;
class Grandpa
{
public:
void grandpapa()
{
cout<<"manisha";}
};

class Ma:virtual public Grandpa
{
public:
void ma()
{cout<<"manisha1";}};

class Pa:virtual public Grandpa
{
public:
void pa()
{cout<<"manisha2";}};



class me:public Ma,virtual public Grandpa
{};


int main()
{
    me m;
    m.grandpapa();
   return 0;
} 
*/

/*Q8.
#include <iostream>
using namespace std;

class String
{
public :
String::~String()
{cout<<"String()"<<endl;}};
int main(){
return 0;}
*/

/*Q10.
#include <iostream>
using namespace std;
int count1 = 0;
class obj
{
public:
obj()
{count1++;}
~obj()
{count1--;
}
};
int main()
{obj A,B,C,D;
cout<<count;
return 0;}
*/

/*Q7
#include <iostream>
using namespace std;
int main()
{
int i,j;
string s;
cin>>i>>j>>s>>s>>i;
cout<<i<<" "<<j<<" "<<s<<" "<<i;
return 0;}
*/

/*Q5
#include <iostream>
using namespace std;
int main()
{
char a;
char ca[]={'a','e','i','o','u','y'};
char* pca=ca;
pca+=2;
a=*pca;
cout<<"a ="<<a<<endl;
return 0;}
*/

/*Q11,Q22
#include <iostream>
using namespace std;
class foo;//declaration of a class
class manisha
{
public :
friend class foo;
};
int main()
{
// foo a;
char s[]={'a','b','c',0,'d','e','f',0};
int i=sizeof(s);
int j=strlen(s);
cout<<s<<i<<j;
return 0;}
*/

/*Q15.
#include <iostream>
using namespace std;
class foo
{
int i;
public:
foo(int  x):i(x)
{}
};
int main()
{//foo *f=new foo;
//foo &f=new foo(1);
//foo *af=new foo[10];
const foo &af=foo(1);
foo f=new foo(1);

return 0;}

*/


///*
/*Q25.
#include <iostream>
using namespace std;
class A
{public:
A()
{
cout<<x;
if(x>1)
throw "x overflow";
else
x++;}
private:
static int x;};
int A::x;
int main()
{
A a,b,c;//class can be instantiated two times without throwing an exception
return 0;}
*/


/*Q1
#include <iostream>
using namespace std;
//class B;

class B

{
  int i;
protected:
friend class A;
int j;
public:
int k;};
class A
{
  public :
void c(B b)
{cout<<b.i<<b.j<<b.k;}    };
int main()
{return 0;}
*/

#include <iostream>
using namespace std;
class A
{int x;
public:
A()
{x=0;
cout<<"\nA:Default Constructor";}
A(const A &a)
{
x=a.x;
cout<<"\nA:copy Constructor";}
A &operator=(A &a)
{x=a.x;
cout<<"\nA:=operator";
return *this;}};
A& func1(A a)
{
return a;}
int main()
{
A a1;
a1=func1(a1);
return 0;}
