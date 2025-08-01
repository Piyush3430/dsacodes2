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
int main()
{
    char a[20];
    cout<<"enter your name";
    cin>>a;
    cout<<"length is"<<getlength(a);

}