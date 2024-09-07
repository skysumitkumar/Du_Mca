#include"iostream"

using namespace std;


int main()
{
    int i;
    int a[2][3] = {1,2,3,
                   3,4,5};
    printf("%d %d\n",a,*a);
    printf("size of a = %d\n",sizeof(a));
    printf("%d  %d  %d\n",&a+1, &a+2, &a+3);
    printf("%d  %d  %d\n",*(a), *(a+1), *(a+2));
    printf("size of *a= %d\n",sizeof(*a));
    printf("%d\n",*(*(a+1) + 1));
    printf("%d\n",a+1);
    scanf("%d",&i);
    return 0;
}
