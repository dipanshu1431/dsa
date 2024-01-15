#include <iostream>
using namespace std;

bool palindrom(string str,int s ,int e){
    if(str[s]!=str[e]){
        return false;
    }