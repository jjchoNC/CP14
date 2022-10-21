#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n,q;
    cin >> n;
    q = n-1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    if (n % 2 != 0)
    {
        for (int i = 0; i <= (q/2); i++)
        {
            cout << a[i] << " "; 
            if (i == (q/2))
            {
                break;
            }
            
            cout << a[(q-i)] << " ";
        }
    }

    else if (n % 2 == 0)
    {
        for (int i = 0; i <= (q/2); i++)
        {
            cout << a[i] << " "; 
            cout << a[(q-i)] << " ";
        }
    }
}