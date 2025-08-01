#include<iostream>
using namespace std; 
class node
{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertatmiddle(node*&head,int position,int d)
{
    int count=1;
        node*temp1=new node(d);
       node*temp=head;
       while(count<position-1)
       {
        temp=temp->next;
        count++;
       }
       temp1->next=temp->next;
       temp->next=temp1;

        

}
void insertattail(node*&tail,int d)
{
    node*temp=new node(d);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;



}
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    node*middle=node1;
    insertattail(tail,12);
    insertatmiddle(head,2,28);
    print(head);




}