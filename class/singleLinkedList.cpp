#include <iostream>
#include <cstdlib>
using namespace std;

struct st
{
    char name[20];
    int roll;
    float mark;
    struct st *next;
};

int main()
{
    struct st *di;
    // struct st *ash;
    // struct st *love;
    // struct st *story;

    di = (struct st *)malloc(sizeof(struct st));

    cout << "enter you name: ";
    cin >> di->name;
    cout << "enter you roll: ";
    cin >> di->roll;
    cout << "enter you mark: ";
    cin >> di->mark;

    cout << "\n\n\tYour data is given\n";
    cout << "Name: " << di->name << endl;
    cout << "Roll.No: " << di->roll << endl;
    cout << "Marks: " << di->mark << endl;

    return 0;
}