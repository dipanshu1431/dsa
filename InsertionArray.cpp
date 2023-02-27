#include<iostream>
using namespace std;
ElementInsert(int arr[],int element ,int index,int size,int totalSize){
    if(size>=totalSize){
        printf("Size is not hair :");
    }else{
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size +=1;
    }

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
    int element =100;
    int index = 5;
    int size =10;
    
    
    ElementInsert(arr,element,index,size,100);
    ElementPrint(arr,size);



    return 0;
}