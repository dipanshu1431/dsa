#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertInBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }
    return root;
}

void takeInpurt(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
        cout << " hello";
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int maxValue(Node *root)
{
    Node *temp = root;
    if (root == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
int minValue(Node *root)
{
    Node *temp = root;
    if (root == NULL)
    {
        return -1;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}
bool searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (root->data < key)
    {
        return searchInBST(root->right, key);
    }
    else
    {
        return searchInBST(root->left, key);
    }
    return false;
}

void range(Node *root, int r1, int r2)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= r1 && root->data <= r2)
    {
        range(root->left, r1, r2);
        cout << root->data << " ";
        range(root->right, r1, r2);
    }
    else if (root->data < r1)
    {
        range(root->left, r1, r2);
    }
    else
    {
        range(root->right, r1, r2);
    }
}
Node *deleteNode(Node *root, int val)
{
    if (root->data < val)
    {
        root->right = deleteNode(root->right, val);
    }
    else if (root->data > val)
    {
        root->left = deleteNode(root->left, val);
    }
    else
    {
        // case 1 leaf Node
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }

        int ip = maxValue(root->left);
        root->data = ip;
        root->left = deleteNode(root->left, ip);
    }
    return root;
}
void printArry(vector<int>path){
    for (int i = 0; i < path.size(); i++)
    {
        cout<<path[i] <<" -> ";
    }
    cout<<"N";
    
}
void rootToLeaf(Node* root,vector<int>path){
    if (root==NULL)
    {
        return;
    }
    path.push_back(root->data);
    if(root->left==NULL && root->right==NULL){
        printArry(path);
        cout<<endl;
    }
    rootToLeaf(root->left,path);
    rootToLeaf(root->right,path);
    path.pop_back();
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
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
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    // 5 1 3 4 2 7 -1
    // 8 5 3 1 4 6 10 11 14 -1
    cout << "Enter the data for Node: " << endl;
    takeInpurt(root);
    cout << "inorder " << endl;
    inorder(root);
    cout << "\nMAX value: " << maxValue(root);
    cout << "\nMIN value: " << minValue(root);
    cout << "\nSearch in BST: " << searchInBST(root, 4) << endl;
    range(root, 5, 12);
    cout << "inorder " << endl;
    // deleteNode(root, 5);
    cout << "inorder " << endl;
    inorder(root);
    cout<< endl;
    levelOrderTraversal(root);
    vector<int> v;
    rootToLeaf(root, v);
    return 0;
}