#include <iostream>
#include <cstring>
using namespace std;
void cutname(char arr[], int index,int n)
{
  for (int i = index-1; i < n; i++)
  {
    arr[i]=arr[i+1];
    cout<<arr[i]<<endl;
  }
  
}
void printFlames(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    char arr1[10] = "utkarsh";
    char arr2[10] = "riya";
    char arr3[10] = "flames";
    int n1=arr1.size();
    int n2=arr2.size();
    int n3=arr3.size();
    cout<<n3;
    strcat(arr1,arr2);
    // arr1.append(arr2);
    int size = arr1.size();
    cout<<"Size of name letter "<<size<<endl;
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                size = size - 2;
            }
        }
    }
    cutname(arr3,1,n3);
    


    //print flames
    
    printFlames(arr3,n3);
   
   
   
    
    return 0;
}