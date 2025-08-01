#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    map<string,int> m;
    // insertion
    //1
    pair<string,int> p= make_pair("babbar",3);
    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);
    m["mera"]=1;
    cout<<m["mera"]<<endl;
    
    cout<<m.at("babbar")<<endl;
    cout<<m["unknownkey"]<<endl;
     cout<<m.at("unknownkey")<<endl;
     cout<<m.size()<<endl;
     cout<<m.count("love")<<endl;
     map<string,int>::iterator it= m.begin();
     while(it!=m.end())
     {
        cout<<it->first<<""<<it->second<<endl;
        it++;

     }


    return 0;
}