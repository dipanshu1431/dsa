#include <iostream>
#include <cstring>
using namespace std;
void cutname(string arr, int index,int n)
{
  for (int i = index-1; i < n; i++)
  {
    arr[i]=arr[i+1];
    cout<<arr[i]<<endl;
  }
  
}
int main()
{
    string arr1 = "utkarsh";
    string arr2 = "riya";
    string arr3 = "flames";
    int n1=arr1.length();
    int n2=arr2.length();
    int n3=arr3.length();
    cout<<n3;
    arr1.append(arr2);
    int size = arr1.length();
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
    for (int i = 0; i < n3; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
   
   
   
    
    return 0;
}