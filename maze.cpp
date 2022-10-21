#include <iostream>
using namespace std;

int maze(int n, int m) {
    if (n == 1 || m == 1)
    {
        return 1;
    }
    
    else
    {
        return maze(n,m) = maze(n-1,m) + maze(n,m-1);
    
    } 
}

int main (){
    int n,m;
    cin >> n >> m;
    cout << maze(n,m);
}