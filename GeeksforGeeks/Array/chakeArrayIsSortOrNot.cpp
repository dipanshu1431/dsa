#include<iostream>
using namespace std;
int  chakeArrayIsSortedOrNot(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
    
}
int main(){
    int arr[]={10,20,30,32,40,200,694};
    int arr2[]={1,5,2,8,0,2};
    cout<<chakeArrayIsSortedOrNot(arr2,6);
    return 0;
}