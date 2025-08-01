#include <iostream>
#include<unordered_map>
using namespace std;
bool checkkcircular(Node*head)
{
  unordered_map<Node*,int> vis;
  Node*temp=head;
  while(temp!=NULL)
  {
    if(vis.find(temp)!=vis.end())
    {
      vis[temp]=true;
    }
    else
    {
      return true;
    }
  }
  return false;

}

int main() {
  unordered_map<char,int> m;
  string s="thiruvananatapuram";
  for(int i=0;i<s.length();i++)
  {
    char ch=s[i];
    m[ch]++;
  }
  for(auto i:m)
  {
    cout<<i.first<<"->"<<i.second;
  }
}