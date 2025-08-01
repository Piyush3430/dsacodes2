#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int *p=&n;
    int *q=p; // Copying one pointer into another pointer output will remain same
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    *p=*p+1;// technique for incrementing
    cout<<*p;
    
}