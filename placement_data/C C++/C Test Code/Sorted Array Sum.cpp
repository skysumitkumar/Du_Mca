#include<iostream>

using namespace std;

int main()
{
    
    int i;
    const int SIZE = 4;
    int a[]={1,1,3,4,6};
    int b[]={0,1,2,5,5};
    for(int i =0; i < SIZE + 1 ;i++)
        printf("%d ",a[i]);
    printf("\n\n");

    for(int i =0; i < SIZE + 1 ;i++)
        printf("%d ",b[i]);
    printf("\n\n");

    int al1, al2, bl1, bl2;
    al1 = bl1 = SIZE -1;
    al2 =  bl2 = SIZE;
    
    int sum1,sum2;
    
    cout<<a[al2]<<"+"<< b[bl2]<<" = "<<a[al2]+b[bl2]<<"      "<<"a["<<al2<<"] + "<<"b["<<bl2<<"]"<<endl;
    /* algo */
    for(int i = 0 ;i < SIZE ;i++)
    {
        sum1 = a[al1] +  b[bl2];
        sum2 = a[al2]+ b[bl1];
        if(sum1 > sum2)
        {
                cout<<a[al1]<<"+"<< b[bl2]<<" = "<<sum1<<"      "<<"a["<<al1<<"] + "<<"b["<<bl2<<"]"<<endl;
                if(a[al1] < b[bl2])
                    al1--;
                else
                     bl2--;
        }
        else
        {
                cout<<a[al2]<<"+"<< b[bl1]<<" = "<<sum2<<"      "<<"a["<<al2<<"] + "<<"b["<<bl1<<"]"<<endl;
                if(a[al2] < b[bl1])
                    al2--;
                else
                    bl1--;
        }
    }
    
    scanf("%d",&i);
    return 0;
}
