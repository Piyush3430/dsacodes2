#include<iostream> 
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // to pop element
    s.pop();
    // to print element
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
        
    }
}