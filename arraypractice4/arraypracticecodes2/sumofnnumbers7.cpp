#include<iostream>
using namespace std;
int sum(int n)
{
    int ans=0;
    if(n==0)
    {
        return 0;
    }
    
    ans=n+sum(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<sum(n);
    

}