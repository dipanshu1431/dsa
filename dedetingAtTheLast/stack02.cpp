#include <iostream>
using namespace std;
struct stack
{
    int size, top, *arr;
};
int inEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        cout << "stack is underflow Element is not hear" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int inFull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        cout << "stack is overflow " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(struct stack *p, int val)
{
    if (inFull(p))
    {
        cout << "stack is overflow \n space is not hear " << val << endl;
        return 0;
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
        return val;
    }
}
int inTop(struct stack *p){
    return p->arr[p->top];
}
int inBottam(struct stack *p){
    return p->arr[0];
}
int main()
{
    struct stack *d = (struct stack *)malloc(sizeof(struct stack));
    d->size = 10;
    d->top = -1;
    d->arr = (int *)malloc(d->size * sizeof(int));
    cout << "stack is created " << endl;
    cout << inEmpty(d) << endl;
    cout << inFull(d) << endl;
    cout << push(d, 46) << endl;
    cout << push(d, 78) << endl;
    cout << push(d, 49) << endl;
    cout << push(d, 486) << endl;
    cout << push(d, 56) << endl;
    cout << push(d, 4) << endl;
    cout << inEmpty(d) << endl;
    cout << inFull(d) << endl;
    cout << inTop(d) << endl;
    cout << inBottam(d) << endl;

    return 0;
}