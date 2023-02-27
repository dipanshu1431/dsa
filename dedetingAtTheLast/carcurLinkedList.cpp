#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
//linked List Travlagen
void callLinkedlist(struct Node *head){
    struct Node *ptr=head;
    do
    {
        printf("%d ",ptr->data);
       ptr=ptr->next;
    } while (ptr!=head);    
}
// add elemnt in firt
struct Node *inserBeginning(int data,struct Node *head){
    struct Node *q=(struct Node *)malloc(sizeof(struct Node));
    q->data=data;
    struct Node *ptr=head->next;
    while (ptr->next !=head)
    {
        ptr=ptr->next;
    }
    ptr->next=q;
    q->next=head;
    head=q;
    return head;
    
}
//add element ta a given node
struct Node *insertAtANode(int data,struct Node *head,struct Node *one){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    //some essu to add a node 
    struct Node *p=head;
    while (p->next!=one)
    {
        p=p->next;        
    }
    ptr->next=p;
    one->next =ptr;
    //add at a given value

        // struct Node *p=head;
        // struct Node *q=head->next;
        // while (p->data!=value)
        // {
        //     p=p->next;
        //     q=q->next;
        // }
        // ptr->next=q;
        // p->next=ptr;
        


    return head;
}

int main(){
    struct Node *head;
    struct Node *one;
    struct Node *two;
    struct Node *three;
    head = (struct Node *)malloc(sizeof(struct Node));
    one = (struct Node *)malloc(sizeof(struct Node ));
    two =(struct Node *)malloc(sizeof(struct Node));
    three=(struct Node * )malloc(sizeof(struct Node));

    head ->data =20;
    head ->next =one;

    one->data=30;
    one->next=two;

    two->data=40;
    two->next=three;
    three->data=50;
    three->next =head;

    callLinkedlist(head);
    printf("\n");
    // head=inserBeginning(800,head);
   insertAtANode(200,head,one);
    callLinkedlist(head);
return 0;
}