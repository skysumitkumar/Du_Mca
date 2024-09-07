#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    char r[] = "\123456";
    char s[] = "\212421345624212412";
    printf("r = %d\n", sizeof(r));
    printf("s = %d\n", sizeof(s)); 
    cout<<r<<endl;  
    cout<<s;     
    getchar();
}
/*
class base
      {
        public:
        int bval;
        base(){ bval=0;}
        };

class deri:public base
        {
        public:
        int dval;
        deri(){ dval=4;}
        };
        
void SomeFunc(base *arr,int size)
{  
    for(int i=0; i<size ; i++,arr++)
        cout<<arr->bval;
    cout<<endl;
}

int main()
{
    int i;
    base BaseArr[5];
    SomeFunc(BaseArr,5);
    deri DeriArr[5];
    SomeFunc(DeriArr,5);
    scanf("%d",&i);
}

*/
