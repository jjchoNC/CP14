#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }

    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        while (a[i] != i)
        {
            swap(a[i],a[a[i]]);
            temp++;
        }
    }
    cout << temp;
}
