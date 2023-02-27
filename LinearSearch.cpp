#include <iostream>
using namespace std;

linearSearch(int arry[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arry[i] == element)
        {
            // printf("index = %d",i);
            cout << "Element is persent in index = "<<i ;
        }
    }

    return 0;
}
int main()
{
    int arr[] = {23, 45, 7, 3, 90, 34, 12, 5, 6, 654};
    int size = sizeof(arr) / sizeof(int);
    int element = 3;
    linearSearch(arr, element, size);
    return 0;
}