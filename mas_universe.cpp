#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,b = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        b += a[i][i];
    }
    
    cout << b;
}