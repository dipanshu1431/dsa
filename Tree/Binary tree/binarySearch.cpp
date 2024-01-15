#include <iostream>
using namespace std;

bool palindrom(string str,int s ,int e){
    if(str[s]!=str[e]){
        return false;
    }
    if(s==e){
        return true;
    }
    if(s<e+1){
        return palindrom(str,s++,e--);
    }
    return true;
}
// int binarySearch(int arr[], int l, int h, int key)
// {
//     int mid = (l + h) / 2;
//     if (key == arr[mid])
//         return mid;
//     if (key > arr[mid])
//         return binarySearch(arr, (mid + 1), l, key);
//     return binarySearch(arr, l, (mid - 1), key);
// }
int main()
{
    // int arr[] = {2, 6, 8, 9, 20, 30};
    // binarySearch(arr, 0, 5, 9);
    string str ="noon";
    cout<<palindrom(str,0,4);
}
