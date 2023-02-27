#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 3, 4, 4};
    int arr1[7]={0};
    int j=0;
    for (int i = 0; i < 7; i++)
    {
        int tamp=arr[i];
        arr1[tamp]=arr1[tamp]+1;
        tamp=0;

    }

    for (int i = 0; i < 7; i++)
    {
        if(arr1[i]>0){
            cout<<arr1[i]<<" ";
        }
    }
    
    








    // for (int i = 0; i < 6; i++)
    // {
    //     int tamp = arr[i] ^ arr[i + 1];
    //     if (tamp == 0)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    return 0;
}