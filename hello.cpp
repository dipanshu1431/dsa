#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Write your totalPrime function here
int totalPrime(int s, int e)
{
    vector<int> ans;
    bool isPrime = true;
    for (int i = s; i <= e; i++)
    {
        for (int j = i; j * j <= e; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            ans.push_back(i);
            cout<<i<<endl;
        }
    }

    return ans.size();
}

int main()
{
    int S, E;
    cout<<"Enter :";
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}