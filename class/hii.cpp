#include<iostream>
using namespace std;

int function(int a,int b,int n){
    int x=b;
    int res=1;
    while (x>=1)
    {
        res=(res*a)%n;
        x--;
    }
    return res;
    
}
int main(){
    int a;
    // int b;
    int n;
    int ka,kb;
    int x,y;
    int key1,key2;
    cout<<"Enter number : ";
    cin>>a;
    // cout<<"Enter  number: ";
    // cin>>b;
    cout<<"Enter number n";
    cin>>n;
    cout<<"Enter number ka smaller than n ";
    cin>>ka;
    cout<<"Enter number kb smaller than n ";
    cin>>kb;
    x=function(a,ka,n);
    y=function(a,kb,n);
    key1=function(y,ka,n);
    key2=function(x,kb,n);
    cout<<"key1= "<<key1<<endl<<"key2= "<<key2;
    return 0;
}