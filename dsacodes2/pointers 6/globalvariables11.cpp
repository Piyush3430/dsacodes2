#include<iostream>
using namespace std;
int score=15;//global variable
void a(int& i)
{
    cout<<score<<endl;
    i=i+1;
}
int main()
{
    int i=5;
    a(i);
    cout<<i;
    
}