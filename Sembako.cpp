#include <iostream>
using namespace std;

int main(){
    int q;
    int temp1 = 0;
    int temp2 = 0;
    int j = 0;
    cin >> q;
    int x[q];
    string z[q];
    string a[q];
    for (int i = 0; i < q; i++)
    {
        cin >> x[i];

        if (x[i] == 1)
        {
            cin >> z[temp2];
            temp2++;
        }

        else if (x[i] == 2)
        {
            a[j] = z[temp1];
            j++;
            temp1++;
        }   
    }

    for (int i = 0; i < temp1; i++)
    {
        cout << a[i] << "\n";
    }
}