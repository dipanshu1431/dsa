#include <bits/stdc++.h> 
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void traversion( Node *ptr){
    int i=0;
    while (ptr!=NULL)
    {
        cout<<i<<" = "<<ptr->data<<endl;
        i++;
    }
    
}
int main(){
    Node *head=new Node(10);
    Node *fst=new Node(20);
    Node *snd=new Node(30);
    Node *trd=new Node(40);
    head->next=fst;
    fst->next=snd;
    snd->next=trd;
    traversion(head);
    return 0;
}