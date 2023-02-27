#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element of LinkedList : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *linkedlistInsertion(struct Node *first, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->data=data;
    ptr->next=first;
    
    return ptr;
};

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fiveth;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fiveth = (struct Node *)malloc(sizeof(struct Node));
    // first connect with secon
    first->data = 23;
    first->next = second;

    second->data = 45;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 33;
    fourth->next = fiveth;

    fiveth->data = 88;
    fiveth->next = NULL;
    linkedlistTraversal(first);

    first = linkedlistInsertion(first, 20);
    linkedlistTraversal(first);

    return 0;
}