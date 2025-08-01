#include<iostream>
using namespace std;
int ispresent( int arr[][3],int row,int col,int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]==key)
            {
                return 1;

            }
        }
        
    }

}
int issum(int arr[][3],int row,int col)
{
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
           
        }
        
    }
    return sum;

}
int main()
{
    int a[3][3];
    int target;
    cout<<"enter the key"<<endl;
    cin>>target;
    cout<<"enter the values";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<ispresent(a,3,3,target);
    cout<<issum(a,3,3);
    
}