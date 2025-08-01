#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr; //creating dynamic array
    int top;
    int size;
    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1;

    }
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"stack is full";
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }
        else
        {
            top--;
        }
    }
    void count()
    {
        if(top==size-1)
        {
            cout<<size;
        }
        else
        {
            top++;
            cout<<top;
        }

    }
    void empty()
    {
        if(top==-1)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
    }
};
int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.count();
    s.empty();




}