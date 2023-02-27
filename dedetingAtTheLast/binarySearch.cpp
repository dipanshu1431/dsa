#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    for (int i = start; i < end; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return 0;
}
int selectionShort(int aar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0 ; j < i; j++)
        {
            if (aar[j] < aar[i])
            {
                int tamp = aar[i];
                aar[i] = aar[j];
                aar[j] = tamp;
            }
        }
    }

    return 0;
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return 0;
}
int main()
{
    int arr[7] = {8, 10, 12, 21, 27, 34, 42};
    int aar[10] = {3, 1, 4, 2, 6, 0, 8, 4, 9, 5};
    int size = 7;
    int n = 10;
    int key = 21;
    cout << binarySearch(arr, size, key) << endl;
    cout << "selection sort" << endl;
    selectionShort(aar, n);
    printarr(aar, n);
    cout << endl
         << "Bubble sort" << endl;
    bubbleSort(aar, n);
    printarr(aar, n);

    return 0;
}