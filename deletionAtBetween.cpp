#include <iostream>
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
    while (head != NULL)
    {
        printf("linkedList arry = %d \n", head->data);
        head = head->next;
    }
}

struct Node *deletingAtBetween(struct Node *head, int index)
{
    struct Node *ptr = head;

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
        printf("hello");
    }
    struct Node *q = ptr->next;
    ptr->next = q->next;
    free(q);
    return head;
}

int main()
{

    struct Node *head;
    struct Node *one;
    struct Node *two;
    struct Node *three;
    struct Node *four;
    struct Node *five;
    head = (struct Node *)malloc(sizeof(struct Node));
    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    five = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = one;

    one->data = 23;
    one->next = two;

    two->data = 26;
    two->next = three;

    three->data = 27;
    three->next = four;

    four->data = 30;
    four->next = five;

    five->data = 34;
    five->next = NULL;
    printf("simple linked list \n");
    linkedListTraversal(head);

    deletingAtBetween(head, 2);

    printf("before implementation linked list \n");
    linkedListTraversal(head);

   
    

    return 0;
}