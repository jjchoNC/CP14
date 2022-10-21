#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int a;
    a = sizeof(p)/sizeof(p[0]);
    sort(p, p+a);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    
}