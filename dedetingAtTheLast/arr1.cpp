#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter number of element of array"<<endl;
    cin>>n;
    int arr[n];
    int mx=-19876;
    cout<<"enter you element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        // if(arr[i]>arr[i+1]){
        //     cout<<arr[i]<<" ";
        // }else{
        //     cout<<arr[i+1]<<" ";
        // }
        //drive function
        // mx=max(mx,arr[i]);
        // cout<<mx<<" ";


    }
    

    return 0 ; 
}