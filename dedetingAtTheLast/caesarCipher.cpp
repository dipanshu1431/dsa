#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
void encryptsms(string sms, int key)
{
    string result = "";
    for (int i = 0; i < sms.length(); i++)
    {
        result += char(int(sms[i] + key - 65) % 26 + 65);
    }
    cout << "encryptsms = " << result;
}
void decryptionsms(string sms, int key)
{
    string result = "";
    for (int i = 0; i < sms.length(); i++)
    {
        result += char(int(sms[i] - key - 65) % 26 + 65);
    }
    cout << "Decryptionsms= " << result;
}
int main()
{
    cout << "\n\n*********************Using Only Upper Letter********************** \n";
    string sms;
    cout << "ENTER UPPER LETTER IN SMS :" << endl;
    cin >> sms;
    int key;
    cout << "Enter Key :";
    cin >> key;
    cout << "sms = " << sms << endl;
    cout << "Key = " << key << endl;
    encryptsms(sms, key);
    string decryptionsms1;
    cout << "\nEnter decryptionsms : " << endl;
    cin >> decryptionsms1;
    decryptionsms(decryptionsms1, key);

    return 0;
}