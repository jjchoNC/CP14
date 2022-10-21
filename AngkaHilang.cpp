#include <iostream>
#include<cmath>
using namespace std;

int main () {
    int n,k,a,b;
    cin >> n >> k;
    b = pow(10,5) + 1;
    int p[b];
    for (int i = 0; i <= n; i++)
    {
        p[i] = 0;
    }

    for (int j = 1; j <= k; j++)
    {
        cin >> a;
        p[a] += 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (p[i] != 1)
        {  
            cout << i << " ";
        }   
    }
}