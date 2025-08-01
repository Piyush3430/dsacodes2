#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a==0)
        {
            return a;
        }
        else if(b==0)
        {
            return b;

        }
        else if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        
    }
    return a;
    

}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
   cout<< gcd(num1,num2);

}
