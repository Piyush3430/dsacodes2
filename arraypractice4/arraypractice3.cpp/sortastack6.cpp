#include<iostream>
#include<stack>
using namespace std;
void placeatposition(stack<int> &s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    
    if(s.top()>=target)
    {
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    placeatposition(s,target);
    s.push(topelement);




}
void sortstack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int target=s.top();
    s.pop();
    sortstack(s);
    placeatposition(s,target);


}
int main()
{
    stack<int> s;
    s.push(30);
    s.push(20);
    s.push(40);
    s.push(10);
    sortstack(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }




}