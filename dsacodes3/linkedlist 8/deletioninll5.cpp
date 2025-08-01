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
void insertattail(node*&tail,int d)
{
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;

}
void deletenode(node *&head,int position)
{
    int count=1;
    node*temp=head;
    if(position==1)
    {
        head=head->next;
        head->next=NULL;
        delete head;
    }
    node*prev=NULL;
    node*temp=head;
    while(count<position)
    {
         prev=temp;
        temp=temp->next;
        count++;
       
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;




    

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
    insertattail(tail,24);
    insertattail(tail,30);
    insertattail(tail,36);
    deletenode(head,3);
    print(head);



}