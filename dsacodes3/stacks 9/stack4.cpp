#include <iostream>
#include<stack>
using namespace std;
void findmiddleelement(stack<int>& s,int totalsize)
{
  //base case
  if(s.size()==0)
  {
    cout<<"stack is empty no middle element";
    return;
  }
  if(s.size()==totalsize/2+1)
  {
    cout<<"middle element is"<<s.top();
    return;
  }
  //store the the elemnt
  int element=s.top();
  s.pop();

  //recursive call
  findmiddleelement(s,totalsize);

  //push the element back
  s.push(element);

 
}
int main()
{
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  int totalsize=s.size();
  findmiddleelement(s,totalsize);

  
}

