#include <iostream>
using namespace std;

void input(int s){
    int a,b;
    int arr[s];
    int guess[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    int rule = 0;
    char op;
    cin >> op;
    while (op == '?' && rule <= s)
    {
        cin >> a >> b;
        cout << arr[a-1] + arr[b-1] << endl;
        op = 0;
        cin >> op;
        rule++;
    }
    char op2;
    cin >> op2;
    for (int i = 0; i < s; i++)
    {
        cin >> guess[i];
    }
    int temp = 0;
    for (int  i = 0; i < s; i++)
    {
        if (guess[i] == arr[i])
        {
            temp++;
        } 
    }   
    if (temp == s)
    {
        cout << '1';
    }
    
}

int main(){
    int s;
    cin >> s;
    input(s);
}