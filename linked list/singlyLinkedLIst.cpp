#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructure call / create
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        int value=this->data;
        if (value!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        
    }
};
void inserAtbeginng(node *&head, int data)
{
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(node *&head, int data)
{
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    node *ptr = new node(200);
    temp->next = ptr;
}
void insertAtPosition(node *&head, int position, int data)
{
    node *temp = head;
    if (position == 1)
    {
        inserAtbeginng(head, data);
        return;
    }

    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}



void travalSinglyLinkedlist(node *head)
{
    node *tra = head;
    while (tra != NULL)
    {
        cout << tra->data << " ";
        tra = tra->next;
    }
    cout << endl;
}

//delete node

int main()
{
    // first methode
    // node *first =(node*)malloc(sizeof(node));
    // node *second =(node*)malloc(sizeof(node));
    // node *third =(node*)malloc(sizeof(node));
    // node *four  =(node*)malloc(sizeof(node));
    // node *five  =(node*)malloc(sizeof(node));

    // first->data=10;
    // first->next=second;

    // second->data=12;
    // second->next=third;

    // third->data=14;
    // third->next=four;

    // four->data=15;
    // four->next=five;

    // five->data=20;
    // five->next=six;

    // six->data=25;
    // six->next=NULL;

    // second method by using constructure call
    node *first = new node(10);
    node *second = new node(12);
    node *third = new node(15);
    node *four = new node(18);
    first->next = second;
    second->next = third;
    third->next = four;
    cout<<"Simple print singly linked list "<<endl;
    travalSinglyLinkedlist(first);
    cout<<"insert at First 100 "<<endl;
    inserAtbeginng(first, 100);
    travalSinglyLinkedlist(first);
    cout<<"insert at End 200 "<<endl;
    insertAtEnd(first, 200);
    travalSinglyLinkedlist(first);
    cout<<"insert at Position 5000"<<endl;
    insertAtPosition(first,3,5000);
    travalSinglyLinkedlist(first);
    cout<<"insert at 1st Position 100000 "<<endl;
    insertAtPosition(first, 1, 1000000);
    travalSinglyLinkedlist(first);
    return 0;
}