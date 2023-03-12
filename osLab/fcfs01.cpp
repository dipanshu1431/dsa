#include <iostream>
using namespace std;
void copy(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int average(int arr[], int n)
{
    int tamp = 0;
    for (int i = 0; i < n; i++)
    {
        tamp += arr[i];
    }
    return tamp;
}

int main()
{
    int n;
    cout << "Enter the number the proces :- " << endl;
    cin >> n;
    // procesing time
    int procesId[n];
    cout << "Enter proces id:" << endl;
    copy(procesId, n);

    // arival time
    int arivalT[n];
    cout << "Enter the Arival time:" << endl;
    copy(arivalT, n);
    // cout<<"\t Arival  time\n";
    // printarr(arivalT,n);

    // wating time
    int BT[n];
    cout << "Enter the Bust Time :" << endl;
    copy(BT, n);

    // cout << "\nProcesig  time "<<endl;
    // printarr(procesId, n);
    // cout << "\nArival  time "<<endl;
    // printarr(arivalT, n);
    // cout << "\nBust time "<<endl;
    // printarr(BT, n);

    // implemention start
    int wt[n];
    int tat[n];
    wt[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        wt[i] = BT[i - 1] + wt[i - 1];
    }
    // cout<<"\nWating time"<<endl;
    // printarr(wt, n);

    int CT[n];

    for (int i = 0; i < n; i++)
    {
        CT[i] = BT[i] + wt[i];
    }
    // cout<<"\nCT"<<endl;
    // printarr(CT,n);
    int TAT[n];
    for (int i = 0; i < n; i++)
    {
        TAT[i] = CT[i] - arivalT[i];
    }

    cout << "Prosec ID: \t Arival Time \t  Bust Time\t\tCT \t WT \t\t TAT \n ";
    printarr(procesId, n);
    cout <<"\t ";
    printarr(arivalT, n);
    cout << "\t ";
    printarr(BT, n);
    cout << "\t ";
    printarr(CT,n);
    cout << "\t ";
    printarr(TAT, n);
    cout << "\t ";
    printarr(wt, n);
    float aOWT = average(wt, n);
    float aOTAT = average(TAT, n);
    cout << "\nAvarage WT: " << aOWT / n << endl;
    cout << "\nAverage of TAT: " << aOTAT / n << endl;

    return 0;
}