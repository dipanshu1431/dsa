#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "stack overflow! cannot push elemnt val = " << val<<endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    return 0;
}
int pop(struct stack *ptr)
{
    if (inEmpty(ptr))
    {
        cout << "stack underflow! cannot pop" <<endl;
        return -1; 
    }
    else
    {
        int val =ptr->arr[ptr-top];
        ptr->top--;
        return val;

    }
    
}

int main()
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 5;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));
    cout << " Stack has been created" << endl;
    // int d1 = isFull(p);
    // int d2 = isEmpty(p);
    cout << isEmpty(p) << endl;
    cout << isFull(p) << endl;
    push(p, 30);
    push(p, 38);
    push(p, 32);
    push(p, 85);
    push(p, 86);
    push(p, 32);
    cout << isEmpty(p) << endl;
    cout << isFull(p) << endl;

    return 0;
}