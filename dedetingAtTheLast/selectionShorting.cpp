#include <iostream>
using namespace std;

int selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            if (min != i)
            {
                int swap = arr[i];
                arr[i] = arr[min];
                arr[min] = swap;
            }
        }
    }
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
}
int main()
{
    int arr[] = {-2, 88, 3, -1, 333, 44, 56, 7, 98, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printarr(arr,size);
    return 0;
}