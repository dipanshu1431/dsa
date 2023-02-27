#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    int key;
    cout<<"Enter the number of plain text size: ";
    cin>>n;
    char plaintext[n];
    cout<<"Enter the text in captal latter: ";
    cin>>plaintext;
    cout<<"enter the key: ";
    cin>>key;
    string result="";
    for (int i = 0; i < n; i++)
    {
        result += char(int(plaintext[i] + key - 65) % 26 + 65);
    }
    cout << "encryptsms = " << result;
    

    return 0;
}