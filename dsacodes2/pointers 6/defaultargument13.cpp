#include<iostream>
using namespace std;
void print(int arr[],int size,int start=0)
{
    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int arr[5]={1,4,7,8,9};
    int size=5;
    print(arr,size,2); //value of start given else it will diaplay array from zero
    return 0;
}