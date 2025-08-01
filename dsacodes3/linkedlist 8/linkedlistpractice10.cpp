#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(Node*&head,int d)
{
    Node*temp1=new Node(d);
    temp1->next=head;
    head=temp1;




}
void insertatatail(Node*&tail,int d)
{
    
    
    Node*temp1=new Node(d);
    tail->next=temp1;
    tail=temp1;
}
void insertatmiddle(Node*&head,int d,int position)
{
    int cnt=1;
    Node*temp3=head;
    if(position==1)
    {
        insertathead(head,d);
    }
    while(cnt<position-1)
    {
        temp3=temp3->next;
        cnt++;
    }
    Node*nodetoinsert=new Node(d);
    nodetoinsert->next=temp3->next;
    temp3->next=nodetoinsert;
}
void deletenode(Node*head,int position)
{
    if(position==1)
    {

    }
    Node*temp3=NULL;
    Node*temp4=head;
    int cnt=1;
    while(cnt<position)
    {
        temp3=temp4;

        temp4=temp4->next;
        cnt++;
    }
    
    temp3->next=temp4->next;
    temp4->next=NULL;
}
void print(Node*&head)
{
    Node*temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data;
        temp2=temp2->next;
    }
}
int main()
{
    Node*temp=new Node(10); //creating a new node for practice
    Node*head=temp;// head pointing to temp
    Node*tail=temp;
    insertathead(head,12);
    insertathead(head,14);
    insertatatail(tail,16);
    insertatmiddle(head,30,3);
    deletenode(head,3);
    print(head);



}