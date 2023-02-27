#include <iostream>
using namespace std;
long long int factorial(long long int n) 
{
    int count = 1;
    for (int i = 1; i < n+1; i++)
    {
        count = count * i;
    }
    cout<<count;
}
int main(){
    factorial(12);
    return 0;
}