#include <iostream>
using namespace std;

void liftRotateArray(int arr[], int n, int pos)
{
    int i = 0, j = 0;
    int tamp[n];
    for (int i = pos; i < n; i++)
    {
        tamp[i] = arr[j];
        j++;
    }
    for (int i = 0; i < pos; i++)
    {
        tamp[i] = arr[j];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = tamp[i];
    }
}
void printArry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void liftShiftArray(int arr[],int pos,int n){
    for (int i = 0; i < pos; i++)
    {
        int last=arr[0];
        for (int i = 0; i < n-1; i++)
        {
            arr[i]=arr[i+1];            
        }
        arr[n-1]=last;
    }
    
}

int main()
{
    int arr[] = {1, 7, 5, 4, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 3;
    printArry(arr, n);
    // liftRotateArray(arr, n, pos);
    liftShiftArray(arr,pos,n);
    printArry(arr, n);



    return 0;
}