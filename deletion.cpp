#include<iostream>
using namespace std;
ElementDeletion(int arr[] ,int index,int size,int totalSize){
    
    for (int i = index; i < size; i++)
    {

        arr[i]=arr[i+1];
    }
    // arr[index]=element;
    size -=1;
    

    return 0;
}
ElementPrint(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}

int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,0};
    // int element =100;
    int index = 5;
    int size =10;
    
    
    ElementDeletion(arr,index,size,100);
    ElementPrint(arr,size);



    return 0;
}