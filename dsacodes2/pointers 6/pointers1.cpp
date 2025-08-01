#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<"size of integer is"<<sizeof(num)<<endl;
    cout<<"size of pointer is"<<sizeof(ptr)<<endl;
}