#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;

    }
};
void insertathead(node*&head,int d)
{
    if(head==NULL)
    {
        node*temp=new node(d);
        head=temp;
    }
    node*temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(node*&tail,int d)
{
    node*insert=new node(d);
    node*temp=tail;
    tail->next=insert;
    insert->prev=tail;
    tail=insert;




}
void insertatposition(node*&head,node*&tail,int d,int postion)
{
    int count=1;
    node*position=new node(d);
    node*temp=head;
    while(count<postion-1)
    {
        temp=temp->next;
        count++;
    }
    position->next=temp->next;
    temp->next->prev=position;
    temp->next=position;
    position->prev=temp;


}
void deletenode(node*&head,int position)
{
    int count=1;
   
    if(position==1)
    {   
        node*temp=head;
        head=head->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;

    }
    node*current=head;
    node*back=NULL;
    while(count<position)
    {
        back=current;
        current=current->next;
        count++;
        
    }
    back->next=current->next;
    current->next->prev=back;
    current->next=NULL;
    current->prev=NULL;
    delete current;
    
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
int getlength(node*&head)
{
    int count=0;
    node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;


}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertathead(head,12);
    insertathead(head,69);
    insertattail(tail,24);
    insertattail(tail,36);
    insertatposition(head,tail,34,3);
    deletenode(head,1);
    print(head);

}