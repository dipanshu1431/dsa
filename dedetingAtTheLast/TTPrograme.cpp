#include<iostream>
using namespace std;



void sortingArray(int *arr,int n){
        
    for (int i = 0; i < n-1; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if(arr[i]<arr[j]){
                int tamp=arr[i];
                arr[i]=arr[j];
                arr[j]=tamp;
            }
            
        }
        
    }
    
}

int main()
{
    int a=10;
    int b=23;
    swapValue(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    int arr[]={1,3,5,6,8,90,8};
    sumOfAllElement(arr,7);
    sortingArray(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
