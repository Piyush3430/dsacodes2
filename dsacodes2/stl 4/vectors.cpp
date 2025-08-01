#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity"<<v.capacity();
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(1);
    //for pop
    for(int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    for(int i:v)
    {
        cout<<i<<"";
    }
    v.clear();
    cout<<v.size();
    vector<int> a(5,1);//initialise every elemnt  by 1
     vector<int> last(a);
    for(int i:last)
    {
        cout<<i<<"";
    }cout<<endl;

   


}
