#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return 1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
    

}
int main()
{
    int a[4]={1,2,3,4};
   int result= binarysearch(a,3,4);
   cout<<result;
    

}