#include<iostream>
using namespace std;
bool binarysearch(int arr[],int size,int key,int s,int e)
{
   
    if(s>e)
        return false;
     int mid;
    mid=(s+e)/2;
    if(arr[mid]==key)
        return true;
    if(arr[mid]>key)
    {
        e=mid-1;
       return binarysearch(arr,5,key,s,e);
    }
    else{
        s=mid+1;
        return binarysearch(arr,5,key,s,e);

    }
    


}
int main()
{
    int k;
    cin>>k;
    int a[5]={2,4,6,8,10};
   bool ans1= binarysearch(a,5,k,0,4);
    
    if(ans1)
    {
        cout<<"it is present";
    }
    else
    {
        cout<<"not present";
    }

}
