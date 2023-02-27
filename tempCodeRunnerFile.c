void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element of LinkedList : %d", ptr->data);
        ptr->next;
    }
}