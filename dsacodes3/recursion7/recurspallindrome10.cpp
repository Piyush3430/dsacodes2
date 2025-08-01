#include<iostream>
using namespace std;
bool ispalindrome(string& str,int i,int j)
{
    if(i>j)
        return true ;
    if(str[i]!=str[j])
    {
       
        
        return false;
    }
    else
    {
        i++;
        j--;
        return ispalindrome(str,i,j);
    }
}
int main()
{
    string a="aman";
    bool ans=ispalindrome(a,0,a.length()-1);
     if(ans)
    {
        cout<<"it is present";
    }
    else
    {
        cout<<"not present";
    }

}