#include <iostream>
using namespace std;
void arryelementAssec(int arr[],int i, int size)
{
    
    if (i == size - 1)
    {
        return ;
    }
    
     cout << arr[i]<<" ";
     arryelementAssec(arr,i+1,size);
}
int main()
{
    int arry[] = {1, 4, 3, 5, 6, 7, 8, 9, 1, 4};
    int size = sizeof(arry) / sizeof(arry[0]);
    arryelementAssec(arry,0, size);
    return 0;
}