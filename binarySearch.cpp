#include <iostream>
using namespace std;

int BinarySearch(int arr[], int element, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == element)
        {
            return mid ;
            
        }
        if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int arry[] = {1, 3, 5, 6, 8, 9, 12, 13, 23, 45, 500, 801};
    int element = 801;
    int size = sizeof(arry) / sizeof(int);
    int index = BinarySearch(arry, element, size);
    cout << "Number Present in index = "<< index ;

    return 0;
}