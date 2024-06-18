#include<iostream>

using namespace std;

int main()
{

    int i = 1;
  int a[2][3][2] = {
                     {
                        2,4,
                        7,8,
                        3,4
                     },
                     {
                        2,2,
                        2,3,
                        3,4
                     }
                    };
  printf("%u %u %u %d \n",a,*a,**a,***a);
  printf("%d %u %u %d \n",a+1,*a+1,**a+1,***a+1);
  printf("%d\n",*(*(*a + 1)+1));
  printf("%d\n",*(*(*(a+1) +2)+1));
  
  int b[2][2] = {2,5,2,3};
  printf("\nvalue of b = %d  %d",b,*b);

    
    scanf("%d",&i);
}
