#include<iostream>
using namespace std;
void swapalternate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
            i++;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    

}
int main()
{
    int a[5]={1,2,3,4,5};
    swapalternate(a,5);
    

}