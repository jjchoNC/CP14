#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,q,a;
    cin >> n >> q;
    int p[n];
    int x[q];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    a = sizeof(p) / sizeof(p[0]);
    sort(p, p + a);

    for (int i = 0; i < q; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < q; i++)
    {
        cout << p[(x[i]-1)] << "\n";
    }  
}