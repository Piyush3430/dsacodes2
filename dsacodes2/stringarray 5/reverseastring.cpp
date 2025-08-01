#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;

    }
    return count;

} 
int reversestring(char name[],int size)
{
    for(int i=size;i>=0;i--)
    {
        cout<<name[i];

    } 

}
int main()
{
    cout<<"enter a name";
    char a[20];
    cin>>a;
    int num=getlength(a);
    reversestring(a,num);
}