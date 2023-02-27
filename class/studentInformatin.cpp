#include <iostream>
using namespace std;
struct sI
{
    char name[20];
    int roll;
    float mark;
};

int main()
{
    struct sI s1[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter studen name: ";
        cin >> s1[i].name;
        cout << "Enter roll: ";
        cin >> s1[i].roll;
        cout << "Enter studen mark: ";
        cin >> s1[i].mark;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "name: " << s1[i].name << endl;
        cout << "roll: " << s1[i].roll << endl;
        cout << "mark: " << s1[i].mark << endl;
    }
    int max = s1[0].mark;
    int tamp;
    for (int i = 1; i < 5; i++)
    {
        if (max < s1[i].mark)
        {
            max = s1[i].mark;
            tamp = i;
        }
    }
    cout << "Maxmim marks is:" << max << endl;
    cout << "Name of the  maxmim marks score: " << s1[tamp].name << endl;

    return 0;
}
