#include<iostream>
#include<queue>
using namespace std ;


class node
{
public:
    int data;
    node *l;
    node *r;
    node(int x)
    {
        this->data = x;
        this->l = NULL;
        this->r = NULL;
    }
};
void levelOrderT(node *root)
{
    // if (root == NULL)
    // {
    //     return;
    // }
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
            if (temp->l != NULL)
            {
                q.push(temp->l);
            }
            if (temp->r != NULL)
            {
                q.push(temp->r);
            }
        }
    }
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<" ";
}

node *buildTree(node *root)
{
    int data;
    cout << "Enter the Data: " << endl;
    cin>>data;
    root = new node(data);
    if (data ==-1)
    {
        return NULL;
    }
    cout<<"Enter the Left of " <<data<<endl;
        root->l=buildTree(root->l);
        cout<<"Enter the Right of " <<data<<endl;
        root->r=buildTree(root->r);
    
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    // levelOrderT(root);
    postorder(root);
    return 0;
}