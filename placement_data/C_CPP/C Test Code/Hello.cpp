#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;


int main()
{

    char *s= new char[20];
    s="hello";
    cout<<sizeof(*s);

    getchar();
}

