#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

string palindrom(string s){
    string temp;
    temp = s;

    reverse(temp.begin(), temp.end());
    if (temp == s)
    {
        return "palindrom";
    }

    else
    {
        return "bukan palindrom";
    }      
}

int main () {
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << palindrom(s[i]) << "\n";
    }
    
}