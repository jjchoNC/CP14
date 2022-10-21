#include <iostream>
using namespace std;

int main () {
    int n,m,l;
    cin >> n >> m >> l;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int j = 0; j < n-2*l; j++)
        {
            for (int w = 0; w < l; w++)
                {
                    cout << "*";
                }
                
                for (int q = 0; q < m-l; q++)
                {
                    cout << ".";
                }
                cout << endl;
        }
     for (int i = 0; i < l; i++)
        {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
        }
        

    
    
    
}