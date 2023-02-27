#include <iostream>
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
    int n;
    cout << "Enter number of array element: ";
    cin>>n;
    int aar[n];
    cout << "enter element: " << endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> aar[i];
    }

    sortingArray(aar,n);
    for (int i = 0; i < n; i++)
    {
        cout<<aar[i]<<" ";
    }
    

    return 0;
}