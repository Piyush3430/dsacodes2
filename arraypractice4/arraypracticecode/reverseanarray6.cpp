#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    

    

}
int main()
{
    int a[5]={1,2,3,4,5};
    reversearray(a,5);
    
    

}