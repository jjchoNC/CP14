#include <iostream>
#include <algorithm>
using namespace std;

string fun(int a,int b,int c, string str){
    
    if (a == 1)
    {
        swap(str[b-1],str[c-1]);
    }

    else if (a == 2)
    {
        reverse(str.begin() + b-1 , str.begin() + c);
    }
    return str;
}

int main () {
    int n,q;
    cin >> n >> q;
    string str;
    int t,y,u;
    cin >> str;
    for (int i = 0; i < q; i++)
    {
        cin >> t >> y >> u;
        string temp(fun(t,y,u,str));
        t = 0; y =0; u = 0;
        str = temp;
    }
    cout << str;
}