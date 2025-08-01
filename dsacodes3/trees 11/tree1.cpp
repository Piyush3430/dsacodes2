#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
node*buildtree(node*root)
{
    int data;
    cout<<"enter the data";
    cin>>data;
    root=new node(data); 
    if(data==-1)
        return NULL;
    cout<<"inserting data for inserting on left"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"inserting the data to be inserted on right"<<data<<endl;
     
     root->right=buildtree(root->right);
}
void levelOrderTraversal(node*&root) {
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
void inorder(node*root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{
    node*root=NULL;
    root=buildtree(root);
}