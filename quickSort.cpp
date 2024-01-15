#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);
        int pivotIndex = i + 1;

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    
    }
}

int projectsToZeroError(int teamSize, vector<int>& initialScores, int compP, int othQ) {
    // Sort the initial scores in ascending order
    sort(initialScores.begin(), initialScores.end());

    // Calculate the number of projects needed for each member to reach zero error
    vector<int> projectsNeeded(teamSize);
    for (int i = 0; i < teamSize; ++i) {
        if (initialScores[i] == 0) {
            projectsNeeded[i] = 0;
        } else if (initialScores[i] == 1) {
            projectsNeeded[i] = compP;
        } else {
            projectsNeeded[i] = 1 + (initialScores[i] - 1) / othQ;
        }
    }

    // Get the maximum number of projects needed
    int totalProjectsNeeded = *max_element(projectsNeeded.begin(), projectsNeeded.end());

    return totalProjectsNeeded;
}

int main()
{
    vector<int> arr = {12, 7, 11, 8, 6, 3, 9};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}