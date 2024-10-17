#include<iostream>

using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void sort(int *a) 
{ 
    for(int i = 1, j = 0; i<10 ;i++) 
    if(a[j] != a[i])
    {
        if(a[j] > a[i])
                swap(a[i],a[j]);  
        j++;
    }
}

int main()
{
    int i;
    int a[] = {1,0,0,0,0,0,0,0,0,1};
    sort(a);
    for (int i = 0 ;i < 10;i++)
        cout<<a[i];
    scanf("%d",&i);
    return 0;
}
