#include<iostream>
#include<string.h>

using namespace std;

struct data
{
    int i;
};



data::data operator= (data x,data y)
{
    cout<<"Hello\n";
    return x;
}

int main()
{
    int i;
    data a , s;
    a = a = s ;
    scanf("%d",&i);
    return 0;
}
