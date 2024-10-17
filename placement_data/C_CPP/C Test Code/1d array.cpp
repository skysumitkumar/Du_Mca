#include"iostream"

using namespace std;


int main()
{
    int i;
    char a[] = {1,2,3};
    printf("%d %d\n",a,*a);
    printf("size of a = %d\n",sizeof(a));
    printf("%d  %d  %d\n",&a+1, &a+2, &a+3);
    printf("%d  %d  %d\n",*(a), *(a+1), *(a+2));
    printf("size of *a= %d",sizeof(*a));
    scanf("%d",&i);
    return 0;
}
