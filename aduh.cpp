#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s[n];
    string temp;
    string hurufawal[n];
    string hurufakhir[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        temp = s[i];
        hurufawal[i] = temp[0];
        hurufakhir[i] = temp[m-1];
    }
}