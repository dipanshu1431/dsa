#include <string.h>

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;
// WAP to take string as a input and Convert that string in dynimic 2d char address nearest squre
// WAP for bubble short using Recursen
// WAP to selection short in recursen
// WAP to insertin short
int Dipanshu(string str, int l)
{
    int k = 0, row, column;
    row = floor(sqrt(l));
    column = ceil(sqrt(l));

    if (row * column < l)
        row = column;

    char s[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            s[i][j] = str[k];
            k++;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (s[i][j] == '\0')
                break;
            cout << s[i][j];
        }
        cout << endl;
    }
}

int main()
{

    string text = "dipanshu kumarrtyuifghjfghjk";
    int l = text.length();

    Dipanshu(text, l);
}
