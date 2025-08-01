#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    int topelement=s.top();
   
    s.pop();
    insertatbottom(s,target);
    s.push(topelement);
    



}
void reversestack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    // store in other variable
    int target=s.top();
    // pop the top
    s.pop();
    // 
   
    // recursive call to get updated target value
    reversestack(s);
    // send it to insert ata bottom
     insertatbottom(s,target);

    


}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    reversestack(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
        
    }

}
