#include<iostream>
using namespace std;
int power(int a)
{
    if(a==0)
        return 1;
    else
    {
        return a*power(a-1);
    }

}
int main()
{
    int a;
    cin>>a;
  int ans=  power(a);
  cout<<ans;

}