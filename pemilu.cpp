#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    long int c,f;
    cin >> c >> f;
    cout << (c * f)/__gcd(c,f);
}