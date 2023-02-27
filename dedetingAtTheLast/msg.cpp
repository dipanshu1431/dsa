#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{10, 11 ,12} , {20 ,21 , 22}};

    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout <<endl;
    }
    

    return 0;
}