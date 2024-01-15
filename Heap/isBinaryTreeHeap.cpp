#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int index = i;
    int lc = 2 * index;
    int rc = 2 * index + 1;
    int largest = index;
    if (lc <= n && arr[lc] > arr[largest])
    {
        largest = lc;
    }
    if (rc <= n && arr[rc] > arr[largest])
    {
        largest = rc;
    }
    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

int main(){

    return 0;
}