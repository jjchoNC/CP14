#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main () {
    long long n,a,b;
    cin >> n >> a >> b;
    setprecision(15);
    if (a == b)
    {
        cout << n / a;
        return 0;
    }

    else
    {
        cout <<  (n / a) + (n / b) - (n / ((a*b) / __gcd(a,b)));
    }
}