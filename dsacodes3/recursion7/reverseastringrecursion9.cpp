#include<iostream>
using namespace std;
void reversearray(string& a,int i,int j)
{
    if(i>j)
        return;
    swap(a[i],a[j]);
    i++;
    j--;
    reversearray(a,i,j);

}
int main()
{
    string a="babbar";
    int i=0;
    int j=a.length()-1;
    reversearray(a,0,j);
    cout<<a;
}