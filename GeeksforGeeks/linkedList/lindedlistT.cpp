#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void traversion(Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        cout << i << " = " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
}

void Rtraversion(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    cout << ptr->data << endl;
    Rtraversion(ptr = ptr->next);
}
int searching(Node *ptr, int x)
{
    int i = 1;
    while (ptr != NULL)
    {
        if (ptr->data == x)
        {
            return i;
        }
        i++;
        ptr = ptr->next;
    }
    return -1;
}

int RSearching(Node *ptr, int x, int i)
{

    if (ptr == NULL)
    {
        return -1;
    }
    if (ptr->data == x)
    {
        return i;
    }

    return RSearching(ptr = ptr->next, x, i = i + 1);
}
Node *add(Node *head, int x)
{
    Node *ptr=new Node(x);
    // ptr->data = x;
    ptr->next = head;
    return ptr;
}
Node *addAtTheEnd(Node *head,int x){
    Node *p=head->next;
    Node *ptr=head;
    while (p!=NULL)
    {
        if(p)
    }
    
    
    
}

int main()
{
    Node *head = new Node(10);
    Node *fst = new Node(20);
    Node *snd = new Node(30);
    Node *trd = new Node(40);
    head->next = fst;
    fst->next = snd;
    snd->next = trd;
    // int d=searching(head,3);
    // int d1 = RSearching(head, 40, 1);
    // cout << d1;
    // head=add(head, 5);
    // Rtraversion(head);

    traversion(head);

    return 0;
}