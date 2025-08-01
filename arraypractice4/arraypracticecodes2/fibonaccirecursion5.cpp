#include<iostream>
using namespace std;
int fib(int n)
{
    
    if(n==0 )
    {
        return 1;
    }
    return n*fib(n-1);

}
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<fib(n);

}