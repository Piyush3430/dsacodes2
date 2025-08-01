#include<iostream>
using namespace std;
int display(string arr[],int size,int num)
{
    int digit;
    while(num!=0)
    {
        digit =num%10;
        for(int i=0;i<size;i++)
        {
            if(i==digit)
            {
                cout<<arr[i];
            }
        }
        num=num/10;
        
    }

}
int main()
{
    string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cin>>num;
    display(a,10,num);
}