#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string str="babbar";
    string ans="";
    char ch;
    for(int i=0;i<str.length();i++)
    {
        ch=str[i];
        s.push(ch);
        


    }
    while(!s.empty())
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
}