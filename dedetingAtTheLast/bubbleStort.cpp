#include <iostream>
using namespace std;
void bubbleShort(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-j-1 ; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int tamp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tamp;
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
    int arr[] = {33, 11, 22, 44,-2,66,35,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleShort(arr, size);
    printarr(arr, size);
    return 0;
}