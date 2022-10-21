#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if (m != 1)
    {
      for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= m; j++)
        {
          if (j % 2 == 0)
          {
            cout << 'B';
          }

          else
          {
            cout << 'W';
          } 
          
        }
        cout << endl;
        }
    }
    
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                cout << 'B' << "\n";
            }

            else if (i == n)
            {
                cout << 'B' << "\n";
            }
            
            else
            {
                cout << 'W' << "\n";
            }
        }      
    }
}
