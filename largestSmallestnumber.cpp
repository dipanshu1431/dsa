#include <iostream>
using namespace std;
int main()
{
    // fibonaci
    int arry[6] = {2, 35, 22, 1, 8, 10};
    int min = arry[1];
    int max = arry[1];
    int i = 0;

    for (; i < 6; i++)
    {
        max < arry[i] && (max = arry[i]);
        min > arry[i] && (min = arry[i]);
    }
    cout << "max = " << max << " \n MaxI = " << i << endl;
    cout << "max = " << min << " \n MinI = " << i << endl;

    // factorial

    int j, fact = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (j = 1; j <= number; j++)
    {
        fact = fact * j;
    }
    printf("Factorial of %d is: %d", number, fact);

    //split in 2 pasts Add 1st part at the end of 2nd past
    


    return 0;
}
