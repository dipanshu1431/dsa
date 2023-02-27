#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
    int n;
    cout << " Enter Number ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }

        cout << "n" << endl;
    }
}
