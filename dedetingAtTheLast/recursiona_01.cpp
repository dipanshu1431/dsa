#include <iostream>
#include <string.h>
// #include<stdio.h>
using namespace std;

int factorial(int n)
{
    // bace case
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int power(int n)
{
    if (n == 0)

        return 1;

    return 2 * power(n - 1);
    cout << 2 * power(n - 1) << endl;
}

void countingRevers(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    countingRevers(n - 1);
}

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    counting(n - 1);
    cout << n << endl;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // int small=fibonacci(n-2);
    // int big=small+fibonacci(n-1);
    return fibonacci(n - 2) + fibonacci(n - 1);
}
void printDigitsToNumber(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    printDigitsToNumber(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    printf("\n\n****************************Recursion********************\n");
    int n;
    cout << "Enter your number ";
    cin >> n;
    string arr[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
    };
    // factorial
    cout << "factorial" << endl;
    int ans = factorial(n);
    cout << ans << endl;
    cout << "power" << endl;
    // power
    int ans1 = power(n);
    cout << ans1 << endl;

    // counting
    cout << "counting" << endl;
    counting(n);
    cout << "Revers Counting" << endl;
    countingRevers(n);
    cout << "fibonacci" << endl;

    int ans2 = fibonacci(n);
    cout << ans2 << endl;
    cout << "DigitsToNumber" << endl;

    printDigitsToNumber(n, arr);

    return 0;
}