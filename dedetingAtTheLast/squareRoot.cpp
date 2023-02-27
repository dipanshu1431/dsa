#include <iostream>
using namespace std;
int main()
{
    int x=25;
    int start=1;
    int end=x;
    int ans;
    if (x==0)
    {
        return 0;
    }else
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid<=x/mid){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<ans;
    
    
    return 0;
}