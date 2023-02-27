#include <iostream>
using namespace std;
void findmaxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
}
int main()
{
    int arr[] = {10, 5, 20, 8};
    int n = 4;
    findmaxElement(arr, n);
    return 0;
}