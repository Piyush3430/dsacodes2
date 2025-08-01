#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    cout<<"element in front of queue is"<<q.front();
    q.pop();
    cout<<"size of queue is"<<q.size()<<endl;
    cout<<"element in front of queue is"<<q.front();
    q.pop();
    cout<<"size of queue is"<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }

}