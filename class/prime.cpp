// chake number is prime aur not
// if that is compositev num find the all factor of that number
// calculate the aluaral function value of given number
#include <iostream>
#include<cmath>
using namespace std;
void printarry(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int i = 2;
    int k = 0;
    int a[n];
    while (n > 1)
    {
        if (n % i==0)
        {
            a[k++] = i;
            n = n / i;
        
        }
        else
        {
            i++;
        }
    }
    printarry(a,k);
    cout<<endl;
    int arr[10];
    int count=1;
    int num;
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<k;i++){
            if(a[i]==a[i+1]){
                count++;
            }else{
                cout<<a[i]<<" * "<<count<<endl;
                count=1;
            }
        }
        break;
    }
    printarry(arr,10);
    
    
    
    
    
    

    return 0;
}
