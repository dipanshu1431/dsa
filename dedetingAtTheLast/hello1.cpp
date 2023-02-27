#include<iostream>

using namespace std;
void bubbleShort(int arr[],int n){
    int tamp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]<arr[i+1]){
                tamp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tamp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int binnarySearch(int arr[],int key,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        if(arr[m]>key){
            e=m-1;
        }else{
            s=m+1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,7,9,5,8,2};
    bubbleShort(arr,6);
    printArray(arr,6);
    cout<<"key = ";
    // binnarySearch(arr,2,6);
    
    return 0;

}