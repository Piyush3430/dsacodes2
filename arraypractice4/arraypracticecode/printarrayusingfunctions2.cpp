#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i];
    }
    


}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
        
    }
    printarray(a,5);
    


}