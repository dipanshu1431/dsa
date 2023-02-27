#include <iostream>
using namespace std;
void removearrayelement(int arr[], int index,int n)
{
  for (int i = index-1; i < n; i++)
  {
    arr[i]=arr[i+1];
    
  }
  
}
void printarr(int* arr,int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  removearrayelement(arr, 6,7);
  printarr(arr,7);
  removearrayelement(arr, 3,7);
  printarr(arr,7);
  removearrayelement(arr, 1,7);
  printarr(arr,7);
  return 0;
}