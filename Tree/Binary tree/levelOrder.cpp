#include <iostream>
#include <queue>
using namespace std;
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

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left of " << data << endl;
    root->l = buildTree(root->l);
    cout << "Enter the data for right of " << data << endl;
    root->r = buildTree(root->r);
}
// void levelOrderT(node *root)
// {
//     // if (root == NULL)
//     // {
//     //     return;
//     // }
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
            
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->l != NULL)
//             {
//                 q.push(temp->l);
//             }
//             if (temp->r != NULL)
//             {
//                 q.push(temp->r);
//             }
//         }
//     }
// }
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
// void inorderT(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderT(root->l);
//     cout<<root->data<<endl;
//     inorderT(root->r);
// }

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 7 -1 -1 -1 3 5 -1 -1 6 -1 -1
    cout << "INORDER" << endl;
    levelOrderTraversal(root);

    return 0;
}
