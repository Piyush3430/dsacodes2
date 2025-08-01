#include<iostream>
using namespace std;
void destination(int src,int dest)
{
    cout<<src<<endl;
    if(src==dest)
        cout<<"pahuch gaya";
        return ;
    src++;
    destination(src,dest);

}
int main()
{
    int a=1;
    int b=10;
    destination(a,b);
}