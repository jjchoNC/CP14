#include <iostream>
using namespace std;

int main (){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    for (x; x < y; x = a*x +b)
    {
        cout << x << "\n";
    }
}