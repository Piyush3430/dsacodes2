#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void update(int *p)
{
  //  p=p+1;
    *p=*p+1;
}

int main()
{
    int i=5;
    int*p=&i;
    //print(p);
  //  cout<<"before"<<p<<endl;
   
   // cout<<p<<endl; // same value does not get updated only values presnt inside them get updated
    cout<<"before"<<*p<<endl;
     update(p);
    cout<<"after"<<*p;


}
