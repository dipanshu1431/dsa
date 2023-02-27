#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 3, 7, 9, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = size - 1;
    

    while (s < e)
    {
        int tamp = arr[s];
        arr[s] = arr[e];
        arr[e] = tamp;
        s++;
        e--;
    }
    // print arr
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
