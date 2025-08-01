#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    // store value of top in avariable
    int topelement=s.top();
    // pop the element from the top
    s.pop();
    // recursive call
    solve(s,target);
    // backtracking
    s.push(topelement);





}
void insertatbottom(stack<int> &s )
{
    if(s.empty())
    {
        cout<<"stack is empty";
        return;
    }
    int target=s.top();
    s.pop();
    solve(s,target);


}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertatbottom(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();

    }
    

    
}