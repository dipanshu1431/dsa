#include <iostream>
using namespace std;
int sortARR(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int tamp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tamp;
            // arr[i]=arr[i]^arr[i+1];
            // arr[i+1]=arr[i]^arr[i+1];
            // arr[i]=arr[i]^arr[i+1];
        }
    }
    return 0;
}

void arryPrint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int searchElementInArray(int arr[], int key, int n)
{
    // int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int insertAtEnd(int arr[], int n, int data, int capacity)
{
    arr[n] = data;
    cout << data;
    return (n + 1);
}
int insertAtFirst(int arr[], int n, int data, int pos)
{
    int i = 0;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
        // cout << arr[i] << " " << arr[i - 1] << endl;
    }
    arr[pos] = data;
    return (n + 1);
}
int insertAtBetween(int arr[], int n, int data)
{
    int i = 0;
    for (i = n; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
        // cout << arr[i] << " " << arr[i - 1] << endl;
    }
    arr[0] = data;
    return (n + 1);
}

int deletElement(int arr[],int n,int element){
    for (int i = 0; i < n; i++)
    {
        
        
    }
    

}

int main()
{
    int arr[] = {1, 5, 2, 8, 5, 56, 4, 6};
    int n = 8;
    // sortARR(arr, 8);
    // arryPrint(arr,8);
    // int d = searchElementInArray(arr,8,8);
    // cout<<d<<endl;
    // int capacity=sizeof(arr)/sizeof(arr[0]);
    // n=insertAtEnd(arr,n,25,capacity);
    // n = insertAtFirst(arr, n, 6, 3);
    n=insertAtBetween(arr,n,8999);

    arryPrint(arr, n);
    cout << "HIII";
    return 0;
}