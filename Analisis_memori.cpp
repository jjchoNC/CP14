#include <iostream>
#include <cmath>
using namespace std;

int p(int n){
  if (n==1)
  {
   return 1;
  }      
  else if (n > 1)
  {
   return (1 + ceil(n/2) + floor(n/2));
  }
  return 0;
}

int main () {
    int n;
    cin >> n;
    cout << p(n);
}
