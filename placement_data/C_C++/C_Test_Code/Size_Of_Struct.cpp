#include<iostream>
#pragma pack(16)

using namespace std;

struct A{
    int i;
    char c;
}a;

struct B{
    int i;
}b;

struct C{
    char c;
}c;

struct D{
    float f;
    char d;

}d;

struct E{
    float f;
}e;

struct F{
    double d;
    int i;
    char c;  
}f;


int main()
{
    int i = 1;
    printf("size of A %d\n",sizeof(&a));
    printf("size of B %d\n",sizeof(b));
    printf("size of C %d\n",sizeof(c));
    printf("size of D %d\n",sizeof(d));    
    printf("size of E %d\n",sizeof(e));    
    printf("size of F %d\n",sizeof(f));    


    scanf("%d",&i);
    return 0;    
}
