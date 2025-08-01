#include<iostream>
using namespace std;
int linearsearch(int arr[],int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }

    }
    return -1;
    
    
    
    
}
int main()
{

    int a[4]={3,2,5,6};
    cout<<linearsearch(a,1,4);
}