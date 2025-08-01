#include<iostream>
#include<string>
using namespace std;
// calculate length of a string
// int getlength(char ch[])
// {
//     int length=0;
//     int i=0;
//     while(ch[i]!='\0')
//     {
//         length++;
//         i++;

//     }
//     return length;



// }

// reverse a string
// void reversestring(char ch[])
// {
//     int i=0;
//     int j=getlength(ch)-1;
//     int len=getlength(ch);
//     while(i<j)
//     {
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
//     for (int i = 0; i <len ; i++)
//     {
//         cout<<ch[i];
//     }
    

// }

// check for paindrome
// bool checkpalindrome(char a[],int size)
// {
//     int i=0;
//     int j=size-1;
//     while(i<j)
//     {
//         if(a[i]==a[j])
//         {
//             i++;
//             j--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;

// }

void converttouppercase(char a[],int size)
{
    for(int i=0;i<size;i++)
    {
        a[i]=a[i]-'a'+'A';

    }
    for (int i = 0; i < size; i++)
    {
        cout<<a[i];
    }
    

}
int main()
{
    // char ch[10];
   
    //     cin>>ch;
    
    // int result=getlength(ch);
    // reversestring(ch);
    // cout<<result;  

    char a[5];
    cin>>a;
    // cout<<checkpalindrome(a,5);  
    converttouppercase(a,5);

}