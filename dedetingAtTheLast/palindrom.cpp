#include <iostream>
#include <string>
using namespace std;
char changeUpperLetter(char st)
{
    if (st >= 'a' && st <= 'z')
    {
        return st;
    }
    else
    {
        char tamp = st - 'A' + 'a';
        return tamp;
    }
}
bool chakePalindrom(string st)
{
    int s = 0;
    int e = st.length() - 1;
    while (s < e)
    {
        if ((changeUpperLetter(st[s])) != (changeUpperLetter(st[e])))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        return 1;
    }
}

int main()
{
    string st;
    cout << "enter string ";
    getline(cin, st);
    cout << chakePalindrom(st) << endl;
    return 0;
}