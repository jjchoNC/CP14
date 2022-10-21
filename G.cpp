#include <iostream>
using namespace std;

int main(){
    long int n;
    cin >> n;
    if (n == 1)
    {
        cout << "3";
    }
    
    else if (n == 2)
    {
        cout << "5";
    }

    else if (n > 2)
    {
        cout << (n-2) + 6 + (n-3)/3;
    }
}