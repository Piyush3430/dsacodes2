#include<iostream>
using namespace std;
int display(int n)
{
    if(n==0)
        return ;
    cout<<n;
    display(n-1);
}
int main()
{
    int a;
    cin>>a;
    display(a);
}