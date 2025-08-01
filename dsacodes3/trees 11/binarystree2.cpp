#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        this->data=d;
        this->left= NULL;
        this->right=NULL;
    }

    
}; 
void levelOrderTraversal(node*root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}
node* insertinbst(node* root,int d)
{
   if(root==NULL)
   {
    root=new node(d);
    return root;
   }
   if(d>root->data)
   {
    root->right=insertinbst(root->right,d);
   }
   else
   {
    root->left=insertinbst(root->left,d);
   }
   return root;
    
   

}
node*minival(node*root)
{
    node*temp1=root;
    while(temp1!=NULL)
    {
        temp1=temp1->left;
    }
    return temp1;
}
node*deletenode(node*root,int value)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==value)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left!= NULL && root->right==NULL)
        {
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            node*temp=root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minival(root->right)->data;
            root->data=mini;
            root->right=deletenode(root->right,value);
            return root;
            
        }
    }
    else if(root->data>value)
    {
        root->left=deletenode(root->left,value);
        return root;
    }
    else
    {
        root->right=deletenode(root->right,value);
        return root;
    }
}


void takeinput(node*&root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertinbst(root,data);
        cin>>data;
    }
}


   

int main()
{
    node*root=NULL;
    takeinput(root);
    root=deletenode(root,27);
    levelOrderTraversal(root);
    
   

}