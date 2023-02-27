#include<iostream>

using namespace std;

void swap(int a,int b){
    int tamp =a;
    a=b;
    b=tamp;
}

int partition(int arr[],int l,int h){
    int piv =arr[h];
    int p =(l-1);
    for (int i = 0; i < h-1; i++)
    {
        if (arr[i]<piv)
        {
            i++;
            swap(arr[p],arr[i]);
        }
        
    }
    swap(arr[p+1],arr[h]);
    return (p+1);
    
}
void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
}


void quickSort(int arr[],int l,int h){
    if (l<h)
    {
        int pi=partition(arr,l,h);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,h);
    }
    
}


int main(){
    int arr[]={25,50,80,20,90,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n);
    cout<<"Quick sort answer: \n";
    printArr(arr,n);
    return 0;
}