#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,20,30,30,30};
    int tamp=0;
    int n=6;
    for (int  i = 1; i < n; i++)
    {
        if(arr[tamp]==arr[i]){
           arr[tamp]=arr[i];
        }else{
            tamp++;
        }
        // cout<<tamp<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}