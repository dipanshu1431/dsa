#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int data)
{
    if (isFull(top))
    {
        cout << "stack is overflow" << endl;
        return 0;
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        cout << "stack is underflow" << endl;
        return 0;
    }
    else
    {
        struct node *ptr = *top;
        *top = (*top)->next;
        int n = ptr->data;
        free(ptr);
        return n;
    }
    return 0;
}
int main()
{
    struct node *top = NULL;
    int d = isEmpty(top);
    cout << d << endl;
    top = push(top, 78);
    top = push(top, 98);
    top = push(top, 978);
    top = push(top, 8);
    cout << isEmpty(top) << endl;
    linkedlistTraversal(top);
    cout << "\nAfter pop" << endl;
    int d1 = pop(&top);
    linkedlistTraversal(top);

    return 0;
}