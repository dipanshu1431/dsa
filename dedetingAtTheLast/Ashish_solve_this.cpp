#include <iostream>
#include <cmath>
using namespace std;

void checkSumOfSubArray(int *arr, int size)
{
         int d = 0;
   for (int i = 0; i < size; i++)
   {
      for (int j = i; j < size; j++)
      {
         int sum = 0;
         for (int k = i; k < j; k++)
         {
            cout << arr[k] << " ";
            // sum += arr[k];
         }
         // if (sum > d)
         // {
         //    cout << sum << endl;
         // }
         // else
         // {
         //    cout << d << endl;
         // }

         cout << endl;
      }
   }
}

int main()
{

   int arr[]{10, 20, -30, 40 ,-50, 60};
   int size = sizeof(arr) / sizeof(arr[0]);

   checkSumOfSubArray(arr, size);
}