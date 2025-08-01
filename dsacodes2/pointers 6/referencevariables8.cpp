#include<iostream>
using namespace std;
void update(int &n)
{
    n++;
}

int main()
{
    int n=5;
    // int i=5;
    // int &j=i;
    // j++;
    // cout<<i<<endl;
    // i++;
    // cout<<j<<endl;
    cout<<"before"<<n<<endl;
    update(n);
    cout<<"after"<<n;
    



}
