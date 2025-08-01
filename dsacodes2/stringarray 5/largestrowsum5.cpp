#include<iostream>
using namespace std;
int largestrowsum(int arr[][3],int row,int col)
{
    int maxi=-1;
    int sum=0;
    int key=-1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>maxi)
        {
            maxi=sum;
            key=i;
            
        }
        sum=0;
        
    }
    return key;
    return maxi;

}
int main()
{
    int a[3][3];
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<< largestrowsum(a,3,3);


}