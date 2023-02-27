#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << head->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *node2 = new Node(200);
    head->next = node2;
    printLinkedList(head);
    return 0;
}