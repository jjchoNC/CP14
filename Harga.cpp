#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,l1;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i],a[j]);
                cout << i << " " << j << endl;
            }
        }
    }
}