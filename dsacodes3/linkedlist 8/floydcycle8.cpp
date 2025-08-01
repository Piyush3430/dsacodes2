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
    if(tail==NULL)
    {
        node*node2=new node(d);
    }

    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
    temp->next=NULL;
}
node* floyddetectloop(node*head)
{
    node*fast=head;
    node*slow=head;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast)
        {
            return slow;
        }
    }
    return NULL;

}
node*getstartingnode(node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node*intersection=floyddetectloop(head);
    node*slow=head;
    while(slow!=intersection)
    {
        intersection=intersection->next;
        slow=slow->next;
        if(slow==intersection)
        {
            cout<<"present at"<<slow->data;
            return slow;
        }
    }
    return NULL;
}
node*deletenode(node*head)
{
    node*startofloop=getstartingnode(head);
    node*temp=startofloop;
    while(temp->next!=startofloop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertattail(tail,20);
     insertattail(tail,30);
      insertattail(tail,40);
    if(floyddetectloop(head)!=NULL)
    {
        cout<<"cycle is present"<<endl;
    }
    else
    {
        cout<<"no cycle"<<endl;
    }


}