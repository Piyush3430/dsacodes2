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
    temp->next=NULL;
    tail=temp;
    



}

void print(node*&head)
{
    node*temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data;
        temp1=temp1->next;

    }
}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;

    insertattail(tail,12);
     insertattail(tail,14);
     print(head);


}