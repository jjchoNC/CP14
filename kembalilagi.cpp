#include <iostream>
using namespace std;

int main () {
    int a,b,c,x,x1;
    int temp = 1;
    cin >> a >> b >> c >> x;
    x1 = (a*x + b) % c;
    while (x1 != x)
    { 
        temp ++;
        x1 = (a*x1 + b)%c;
    }
   cout << temp;
    
}