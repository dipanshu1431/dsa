#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int l, r, mid;
    l = 0;
    r = arr.size() - 1;
    mid = l + (r - l) / 2;

    while (l <= r)
    {
        if (arr[mid] == key)
            return key;pppp
        else if (arr[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;

        mid = l + (r - l) / 2;
    }
    return -1;
}

pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2)
{
    int key, val, count = 0;
    for (int i = 0; i < arr2.size(); i++)
    {
        key = arr2[i];
        val = binarySearch(arr1, key);
        if (val != -1)
        {
            count++;
        }
    }

    int un = arr1.size() + arr2.size() - count;

    pair<int, int> p;
    p.first = count;
    p.second = un;

    return p;
}

int main()
{

    int m, n;
    cin >> m >> n;

    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    pair<int, int> p = findSimilarity(arr1, arr2);
    cout << "No Of Element Similar : " << p.first << endl;
    cout << "No Of Element Union : " << p.second << endl;

}