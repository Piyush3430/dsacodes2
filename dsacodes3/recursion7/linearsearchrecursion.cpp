#include<iostream>
using namespace std;
bool ispresent(int arr[],int size,int key)
{
    if(size==0)
        return false;

    if(arr[0]==key)
        return true;
    else{
        bool present=ispresent(arr+1,size-1,key);
        return present;
    }

}
int main()
{
    int k;
    cin>>k;
    int a[5]={1,2,3,4,5};
    bool ans=ispresent(a,5,k);
    if(ans)
    {
        cout<<"it is present";
    }
    else
    {
        cout<<"not present";
    }
    

}