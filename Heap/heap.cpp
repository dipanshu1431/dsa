#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        size = 0;
    }
    // max heap
    void insert(int data)
    {
        // inser at last of index
        size++;
        int index = size;
        arr[index] = data;

        // data to right place pe arrange kare
        while (index > 1)
        {
            int preantIndex = index / 2;
            if (arr[index] > arr[preantIndex])
            {
                swap(arr[index], arr[index / 2]);
                index = preantIndex;
            }
            else
            {
                break;
            }
        }
    }
    int delete1()
    {
        // replace top valve with last value
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
       // compare parent and chil value and replace with large value  with top
        int index = 1;
        while (index < size)
        {
            int lc = 2 * index;
            int rc = 2 * index + 1;
            int largest = index;
            if (lc<size && arr[lc] > arr[largest])
            {
                largest = lc;
            }
            if (rc<size && arr[rc] > arr[largest])
            {
                largest = rc;
            }
            if (index == largest)
            {
                return ans;
            }else{
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
    void heapify(int arr[],int n,int i){
        int index =1;
        int lc = 2*index ;
        int rc = 2*index+1;
        int largest = index;
        if(lc<=n && arr[lc]>arr[largest]){
            largest = lc;
        }
        if(rc<=n && arr[rc]>arr[largest]){
            largest = rc;
        }
        if(index != largest){
            swap(arr[index],arr[largest]);
            index = largest;
            heapify(arr,n,index);
        }
    }
    void buildHeap(int arr[],int n){
        for(int i=n/2;i>0;i--){
            heapify(arr,n,i);
        }
    }
    void heapSort(int arr[],int n){
        while (n != 1)
        {
            swap(arr[1],arr[n--]);
            heapify(arr,n,1);
        }
        

    }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 30;
    h.arr[5] = 40;
    h.arr[6] = 45;
    h.arr[7] = 55;
    h.arr[8] = 20;
    h.arr[9] = 25;
    h.size = 9;
    cout << "before arr" << endl;
    for (int i = 1; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    // h.insert(57);
    // cout << "after arr" << endl;
    // for (int i = 1; i < h.size; i++)
    // {
    //     cout << h.arr[i] << " ";
    // }
    h.delete1();
    cout << "Delete arr" << endl;
    for (int i = 1; i < h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    return 0;
}