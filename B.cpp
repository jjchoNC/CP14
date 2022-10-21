#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    int p[n];
    int orang = n;
    int tim;
    tim = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int size = sizeof(p) / sizeof(p[0]);
    sort(p, p + size); 
    for (int i = 1; i <= orang ; i++)
        {   int j = 1;
            int temp = p[n-i];
            while (p[n-i] <= d)
            {   p[n-i] = temp * j;
                orang--;
                if (p[n-i] > d)
                {
                    tim++;
                }  

                if (orang == 0 && p[n-i] <= d && tim == 0)
                {
                    cout << "0";
                    return 0;
                }
                                
                j++;
            }
        } 
    cout << tim;
    return 0;
}