#include<iostream>
using namespace std;
int main()
{
    int arr[10]={23,141,36,42};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<"1st"<<*(arr+1)<<endl;// to access next lo0cation in array
    cout<<"2nd"<<*(arr)+1<<endl;// to add 1 to the array
    int *ptr=arr; //or int*ptr=&arr[o]; so it points to the memory location
    cout<<"1st"<<ptr<<endl;
    cout<<"2nd"<<*ptr<<endl;
    cout<<"3rd"<<*(ptr)+1<<endl;
    int temp[10]={2,3,4};





}