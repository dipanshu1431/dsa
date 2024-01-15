#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *l;
    node *r;
    node(int d){
        this->data=d;
        this->l=NULL;
        this->r=NULL;
    }
};
node *buldTree(node *root){
    cout<<"Enter the data ";
    int data;
    cin>>data;
    root=-new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for insert in left of "<<data<<endl;
    root->l=buld(root->l);
    cout<<"Enter data for insert in right of "<<data<<endl;
    root->r=buldTree(root->r);
    return root;
}
void inorder(node* root){
    
}
int main(){
    node *root =NULL;
    root=buldTree(root);

}