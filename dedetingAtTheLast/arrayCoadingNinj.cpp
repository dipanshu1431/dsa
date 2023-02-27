#include <iostream>
using namespace std;
// long long maxSubarraySum(int arr[], int n)
// {
//     int ans = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             int tamp = ans;
//             ans = ans + arr[i];
//         }
//         if(tamp<ans){

//         }
//     }
// }
int main()
{
    // int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
       int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int p = (a + 1)[5];
    cout << p;
    return 0;
}