
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element of LinkedList : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertAtEnd(struct Node *head,int data){
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    
    struct Node *p=head;
    while (p->next!=NULL)
    {
        
        p=p->next;
        
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return ptr;
    

}


int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fiveth;
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fiveth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = first;

    first->data = 22;
    first->next = second;

    second->data = 23;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 34;
    fourth->next = fiveth;

    fiveth->data = 55;
    fiveth->next = NULL;

    // linkedlistTraversal(head);
    insertAtEnd(head,600);
    linkedlistTraversal(head);

    return 0;
}
