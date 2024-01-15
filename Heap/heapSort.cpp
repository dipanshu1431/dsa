#include <iostream>
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
void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
void heapSort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n--]);
        heapify(arr, n, 1);
    }
}
int main()
{
    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    // int arr[] = {-1,12,15,13,11,14};
    int n =11;
    cout<<"before build heap"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    buildHeap(arr,n);
    heapSort(arr,n);

    cout<<"after build heap"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}