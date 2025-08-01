#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Creation of unordered_map
    unordered_map<string, int> m;

    // Insertion
    pair<string, int> p = make_pair("alto", 8);
    pair<string, int> p2("love", 5);
    m.insert(p);
    m.insert(p2);
    m["fortuner"] = 4;

    // Access
    cout << "Value of alto: " << m.at("alto") << endl;
    cout << "Value of fortuner: " << m["fortuner"] << endl;

    // Key existence check
    cout << "Count of 'vishal': " << m.count("vishal") << endl;

    if (m.find("fortuner") != m.end()) { // Fixed condition
        cout << "fortuner found" << endl;
    } else {
        cout << "fortuner not found" << endl;
    }

    // to find size
    cout<<m.size()<<endl;
    for(auto i:m)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
