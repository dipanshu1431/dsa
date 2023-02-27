#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of worker : ";
    cin >> n; //number of person work in company.one person wor in this company
    int masks[n]={0};
    for (int  i = 0; i < n; i++)
    {
        int workingDays;
        cin>>workingDays;//present in days of month in company.Exam 4daya
        int mask=0;
        for (int i = 0; i < workingDays; i++)
        {
            int day;
            cin>>day;//presen in days of company EXam 1,4,7,9;
            mask=(mask | (1<<day));//day 1->(0=(0|10))->10; day 4->(0=(10|(10000)))->10010;so on 
        }
        masks[i]=mask;
        cout<<mask;
    }
    
}