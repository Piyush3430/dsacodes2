#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    //int a[3][3]={{1,2,3},{4,5,6},{7,8,9}} we can initialise like this as well
    //for taking input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    //for taking output
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"";
        }cout<<endl;
    }
}