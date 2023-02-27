#include <iostream>
using namespace std;
void swapAlternt(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        int tamp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tamp;
        // i++;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// void unique(int arr[], int n,int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             /* code */
//         }

//     }

// }
void duplicate(int arr[], int n)
{
    int tamp = -18889855;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                if (tamp == arr[i])
                {
                    break;
                }
                tamp = arr[i];
                cout << arr[i] << " ";
            }
        }
    }
}
void interic(int a[], int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == a[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int pairSum(int arr[], int x, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 8, 9, 0};
    int a[] = {0, -1, 2, -3, 1};
    int u[] = {6, 2, 6, 5, 2, 2, 8, 5, 6, 7, 6};
    // swapAlternt(arr, 6);
    // unique(arr, 6,3);
    // printArray(arr,13);
    // duplicate(u, 10);
    // interic(a,arr,10);
    cout<<pairSum(a, 4, 5);

    return 0;
}