#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 3, 7, 9, 2, 4};
    int max = arr[0];
    int secondmax;
    for (int i = 1; i < 7; i++)
    {
        if (max < arr[i])
        {
            secondmax = max;
            max = arr[i];
        }
    }
    cout << max << endl;
    cout << secondmax;

    return 0;
}