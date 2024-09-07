#include<iostream>

using namespace std;
double j;
int binomial(int n,int k)


    {
    if(k==0) return 1;
    else return(j=1*binomial(n-1,k-1)*(int)n/k);
}
int main()


    {
    int n,k;
    int x;


        while(scanf("%d%d",&n,&k)==2){
        if(n==0 && k==0) break;
        x = binomial(n,k);
        printf("%d things taken %d at a time is %d exactly.\n",n,k,x);
    }
    return 0;
}
