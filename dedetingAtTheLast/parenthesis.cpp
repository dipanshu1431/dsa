#include <iostream>
using namespace std;
struct stack
{
    int size, top;
    char *arr;
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
int pop(struct stack *p)
{
    if (inEmpty(p))
    {
        cout << "stack underflow! cannot pop" << endl;
        return -1;
    }
    else
    {
        int val = p->arr[p->top];
        p->top--;
        return val;
    }
}
int parenthesisMach( char * arr)
{
    struct stack *p = ;
    p->arr = (char *)malloc(p->size * sizeof(char));
    p->size = 10;
    p->top = -1;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i] == '(')
        {
            push(p, '(');
        }
        else if (arr[i] == ')')
        {
            if(inEmpty(p)){
                return 0;
            }
            pop(p);
        }
    }
    if (inEmpty(p))
    {
        cout << "stack is ballance";
    }else
    return 0;
}
int main()
{
    char *q="((8)(6)";
    
    parenthesisMach(q);

        return 0;
}