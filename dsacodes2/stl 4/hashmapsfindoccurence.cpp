#include <iostream>
#include<unordered_map>
using namespace std;

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
    cout<<i.first<<"->"<<i.second<<endl;
  }
  cout << "Hello world!" << endl;
  return 0;
}