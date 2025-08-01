#include<iostream>
#include<stack>
using namespace std;
void printmiddle(stack<int> &s,int & size)
{
    if(s.size()==(size/2)+1)
    {
        cout<<s.top();
    }
    // store value in a variable
    int temp=s.top();
    // pop top of the stack
    s.pop();
    // recursive call
    printmiddle(s,size);
    // backtracking
    s.push(temp);
    

}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int size=s.size();
    
    printmiddle(s,size);
}