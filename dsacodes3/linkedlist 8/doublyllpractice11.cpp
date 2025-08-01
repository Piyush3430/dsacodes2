#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertathead(Node*&head,int d)
{
    if(head==NULL)
    {
        Node*temp2=new Node(d);
        head=temp2;
        return;
    }
    Node*temp1=new Node(d);
    temp1->next=head;
    head->prev=temp1;
    head=temp1;

    
}
void insertatmiddle(Node*&head,int d,int position)
{
    Node*temp3=new Node(d);
    Node*insert=head;
    int cnt=1;
    while(cnt<position-1)
    {
        insert=insert->next;
        cnt++;
    }
    temp3->next=insert->next;
    temp3->prev=insert;
    insert->next->prev=temp3;
    insert->next=temp3;
    
    
}
void deletenode(Node*&head,int position)
{
    Node*temp3=head;
    Node*pre=NULL;
    int cnt=1;
    while(cnt<position)
    {
        pre=temp3;
        temp3=temp3->next;
        cnt++;


    }
    pre->next=temp3->next;
    temp3->next->prev=pre;
    temp3->next=NULL;
    temp3->prev=NULL;
    delete temp3;
}
void print(Node*&head)
{
    Node*temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data;
        temp1=temp1->next;
    }
}

int main()
{
    Node*temp=new Node(10);
    Node*head=temp;
    Node*tail=temp;
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertatmiddle(head,60,3);
    deletenode(head,3);
    print(head);
    

}