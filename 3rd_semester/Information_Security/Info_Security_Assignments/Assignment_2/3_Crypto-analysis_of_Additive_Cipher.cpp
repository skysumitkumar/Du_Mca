#include<iostream>
#include<tuple>
using namespace std;
// Function to perform the Extended Euclidean Algorithm
tuple<int,int,int>extendedGCD(int a, int b)
{
    // Base case: when b is 0
    if(b == 0)
    {
        return make_tuple(a,1,0); // gcd(a, b), x, y
    }
    // Recursive case: apply the algorithm
    int gcd,x1,y1;
    tie(gcd,x1,y1)=extendedGCD(b,a%b);
    // Update x and y based on the results of the recursive call
    int x=y1;
    int y=x1-(a/b)*y1;
    return make_tuple(gcd, x, y);
}
int main()
{
    int a,b;
    cout<<"Enter two integers a and b: ";
    cin>>a>>b;
    // Call the extendedGCD function
    int gcd,x,y;
    tie(gcd,x,y)=extendedGCD(a,b);
    cout<<"GCD("<<a<<", "<<b<<") = "<<gcd<<endl;
    cout<<"Coefficients x and y: "<<x<<" and "<<y<<endl;
    cout<<"Verification: "<<a<< " * "<<x<<" + "<<b<<" * "<<y<<" = "<<gcd<<endl;
    return 0;
}