#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    node *l;
    node *r;
    int data;
    node(int d)
    {
        this->data = d;
        this->l = NULL;
        this->r = NULL;
    }
};
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->l)
            {
                q.push(temp->l);
            }
            if (temp->r)
            {
                q.push(temp->r);
            }
        }
    }
}
node *buldTree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->l = buldTree(root->l);
    cout << "Enter data for insert in right of " << data << endl;
    root->r = buldTree(root->r);
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->l);
    preorder(root->r);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<" ";
    
}
int countNode(node* root){
    int countl,countr;
    if (root==NULL)
    {
        return 0;
    }

    countl=countNode(root->l);
    countr=countNode(root->r);
    int mycount=countl+countr+1;
    // cout<<mycount<<" ";
    return mycount;
    
}
int sumOfNode(node* root){
    
    if(root==NULL){
        return 0;
    }
    int lsum=sumOfNode(root->l);
    
    
    int rSum=sumOfNode(root->r);
    return lsum+rSum+root->data;
}
int main()
{
    node *root = NULL;
    // creating tree
    root = buldTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level Order
    cout << " print data "<<endl;
    levelOrderTraversal(root);
    cout<<" Inorder traversal is: ";
    inorder(root);
    cout<<"\n preorder traversal is: ";
    preorder(root);
    cout<<"\n postorder traversal is: ";
    postorder(root);
    cout<<"\n count data: ";
    int count=countNode(root);
    cout<<count<<endl;
    cout<<"\n SUM of Node data: ";
    int sum=sumOfNode(root);
    cout<<sum;
    
    return 0;
}