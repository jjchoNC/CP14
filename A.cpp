#include <iostream>
using namespace std;

int main (){
    long long n,m;
    cin >> n >>m;
    if (n < 1 || m < 1)
    {
        return 0;
    }

    else
    {
        if (m == 1)
        {
            cout << n - 1;
        }

        else
        {
            cout << (m-1)*n;
        }
    }
}
    
    
