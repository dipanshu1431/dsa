#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={10,7,4,6,8,10,11};
    int temp=arr[1]-arr[0];
    int count=2;
    int ans=2;
    for (int i = 1; i < n; i++)
    {
        if (temp==arr[i]-arr[i-1])
        {
            count++;
        }else{
            temp=arr[i]-arr[i-1];
            count=2;
        }
        ans=max(ans,count);
    }
    cout<<"ans ="<<count<<endl;
    

    return 0 ; 
}