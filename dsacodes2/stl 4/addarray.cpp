#include<iostream>
using namespace std;
int addarray(int arr[],int size)
{
    int sum=0;
    int ans=0;
    int k=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            k=arr[i]+arr[j];
        }
             
        

    
    if(k>sum)
        {
            sum=k;
        }
    }
    return sum;

}
int main()
{
    int num[4]={1,-2,3,4};
    cout<<addarray(num,4);
}